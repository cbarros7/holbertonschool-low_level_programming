#include "holberton.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

int _strlen(char *s)
{
	int length; /*Declaring variables for counter character*/
	int m;

	length = 0; /*Start 0*/

	for (m = 0; s[m]; m++) /*Count character by character*/
	{
		if (s[m] != ' ') /* != a spaces*/
		{
			length++;
		} /*End IF*/
	} /*End for*/
	return (length);
}
