#include "holberton.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0') /*Declaring WHILE*/
	{
		if (*haystack == *needle) /*if s ==  c*/
		{
			return (haystack); /*return s*/
		}

		haystack++;
	}

	if (*haystack == *needle)
	{
		return (haystack);

	}

	return (haystack);/* values null*/
}
