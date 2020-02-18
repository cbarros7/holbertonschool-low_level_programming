#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: A pointer to an int that will be updated
 *@n: return value n
 *Return: void
 */

void print_array(int *a, int n)

{
	n = 0;
	while (n != 4)
	{
		printf("%d, ", a[n]);

		n++;

		if (n == 4)
		{
			printf("%d\n", a[n]);
		}

	}

}
