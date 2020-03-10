#include <stdlib.h>
#include "dog.h"


/**
 * arg_copy  -   Make a copy of passed in argument
 *
 * @source:      Data to make copy of
 *
 * Return:       Pointer to memory segment containing copy of argument data
 */

char *arg_copy(char *source)
{
	char *ptr;
	int i = 0, length = 0;

	if (source == NULL)
	{
		return (NULL);
	}

	for (length = 0; source[length] != '\0'; length++)
		;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; source[i] != '\0'; i++)
	{
		ptr[i] = source[i];
	}

	ptr[i] = '\0';
	return (ptr);
}


/**
 * new_dog     - Create a new dog variable
 *
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 *
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}

	name_copy = arg_copy(name);
	if (name_copy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->name = name_copy;

	puppy->age = age;

	owner_copy = arg_copy(owner);
	if (owner_copy == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->owner = owner_copy;

	return (puppy);
}
