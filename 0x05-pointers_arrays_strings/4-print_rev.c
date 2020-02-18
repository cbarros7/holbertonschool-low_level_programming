#include "holberton.h"
/**
 * print_rev - prints a string rev
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

void print_rev(char *s)
{
	char *c;
	int m;
	int count = 0;

	c = s;

	for (m = 0; c[m]; m++) /*Count character by character*/
	{
		count++;
	} /*End for*/

	for (m = count; m <= count ; m--) /*Print rev*/
	{
		_putchar (c[m]);

		if (m == 0) /*If when a is 0*/
		{
			break;
		}
	} /*End secondo FOR*/

	_putchar('\n');
}
