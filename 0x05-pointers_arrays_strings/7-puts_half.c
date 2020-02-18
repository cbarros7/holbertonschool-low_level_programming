#include "holberton.h"

/**
 *puts_half - prints every other character of a string,
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	for (i =  i / 2; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');

}
