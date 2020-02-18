#include "holberton.h"

/**
 *puts2 - prints every other character of a string,
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void puts2(char *str)
{
	int i; /*Declaring variables*/

	for (i = 0; str[i] != '\0'; i++) /*Star FOR*/
	{
		_putchar (str[i]); /*display contents*/
		i++; /*Incrementing next position*/
	} /*END FOR*/

	_putchar ('\n');
}
