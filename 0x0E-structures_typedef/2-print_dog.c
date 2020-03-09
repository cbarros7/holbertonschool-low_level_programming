#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"


/**
 * print_dog - function that prints a struct dog
 *@d: array
 * Description: This struct is for dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("0wner: %s\n", d->owner);

}
