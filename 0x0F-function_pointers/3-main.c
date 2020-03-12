#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Checks for the other codes.
 * @argv: Vector.
 * @argc: Counts the arguments.
 * Return: r.
 */

int main(int argc, char *argv[])
{
	/*Delcaring variabls*/
	int (*oper)(int, int);
	int convert_1, convert_2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	convert_1 = atoi(argv[1]);
	convert_2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && convert_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = oper(convert_1, convert_2);
	printf("%d\n", result);
	return (0);
}
