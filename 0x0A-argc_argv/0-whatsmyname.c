#include <stdio.h>
#include "holberton.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("This program was called with \"%s\".\n", argv[0]);

	return (0);
}