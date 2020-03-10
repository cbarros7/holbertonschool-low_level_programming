#include "dog.h"
#include <stdlib.h>

/**
 * _copy  -   Make a copy
 * @src:      Data to make copy of
 * Return:       Pointer copy data other pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (src[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}


/**
 * new_dog     - Create a new dog variable
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
/*{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	snoopie = malloc(sizeof(dog_t));

	if (snoopie == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;

	(*snoopie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;

	return (snoopie);
}*/

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

	name_copy = _copy(name);
	if (name_copy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->name = name_copy;

	puppy->age = age;

	owner_copy = _copy(owner);
	if (owner_copy == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->owner = owner_copy;

	return (puppy);
}
