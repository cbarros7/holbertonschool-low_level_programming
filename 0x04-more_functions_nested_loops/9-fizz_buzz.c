#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

	int n = 100; /*Delcaring statements*/
	int i;

	i = 1;
	while (i <= n) /*Start While*/
	{
		if (i % 3 == 0) /*Muitple 3*/
		{
			printf("Fizz");
		}

		else if (i % 5 == 0) /*Multple 5*/
		{
			printf("Buzz");
		}

		else
		{
			printf("%i", i); /*Print i*/
		}

		i++;
		printf(" ");


	}
	printf("\n"); /*New line*/

}
