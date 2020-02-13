#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i; /*Declaring statements*/
	int j;

	i = 0; /*count*/
	j = 0;
	while (i < 10)/*Start first While*/
	{
		while (j <= 14) /*Start secondo While*/
		{
			if (j > 9) /*print 0-9*/
			{
				_putchar (j / 10 + '0');
				_putchar (j % 10 + '0');
			}

			else /*print num > 9*/
			{
				_putchar (j + '0');
			}

			j++;
		}
		i++;
		j = 0; /*reset count*/
		_putchar ('\n'); /*new line*/
	}
}
