#include "holberton.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char *_strstr(char *haystack, char *needle)
{
	char c;

	c = needle[0]; /*first char of needle*/

	while (*haystack != '\0') /*Declaring WHILE*/
	{
		if (*haystack == c) /*if s ==  c*/
		{
			return (haystack); /*return s*/
		}

		haystack++;
	}

	if (*haystack == c)
	{
		return (haystack);

	}

	return (0);/* values null*/
}
