#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - finds string length in order to malloc properly
 * @str: input string
 * Return: string length unsigned integer
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

return (i);

}
/**
 * _strcpy - copies string
 * @new_struct: pointer to new string
 * @old_struct: pointer to string to copy
 * Return: void#include "dog.h"
 */
void _strcpy(char *old_struct, char *new_struct)
{
	unsigned int i;
	unsigned int len_struct;

	len_struct= _strlen(new_struct);

	for (i = 0; i <= len_struct; i++)
		old_struct[i] = new_struct[i];
}

/**
 * new_dog - creates new type of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int size_name, size_owner;

	size_name = _strlen (name);
	size_owner = _strlen (owner);

	dog_t *snoopie;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}


	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
	{
		return (NULL);
	}
	
	if (snoopie)
	{
		(*snoopie).name = malloc(sizeof(char) * (size_name + 1));
		if ((*snoopie).name)
		{
			(*snoopie).owner = malloc(sizeof(char) * (size_owner + 1));
			if ((*snoopie).owner)
			{
				/*(*snoopie).name = name;*/
				_strcpy((*snoopie).name, name);
				(*snoopie).age = age;
				_strcpy((*snoopie).owner, owner);
				/*(*snoopie).owner = owner;*/
				return (snoopie);
			}
			else
			{
				free((*snoopie).name);
				free(snoopie);
			}
		}
		else
			free(snoopie);
	}
	return (NULL);
}
