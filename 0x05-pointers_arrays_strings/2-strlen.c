#include "holberton.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

int _strlen(char *s)
{
	char *c; /*Declaring pointer*/
	int length; /*Declaring variables for counter character*/
	int m;

	length = 0; /*Start 0*/

	c = s; /*The value of s is equal of c*/

	for (m = 0; c[m]; m++) /*Count character by character*/
	{
		if (c[m] != ' ') /* != a spaces*/
		{
			length++;
		} /*End IF*/
	} /*End for*/
	return (length);
}
