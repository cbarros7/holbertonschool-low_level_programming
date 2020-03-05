#include "holberton.h"
/**
 *_strlen - count arrray
 *@s: array of elements
 *Return: int i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
	{
		i++;
	}
	return (i);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: string
 *@s2: string
 *@n: number bytes
 *Return: char dst
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dst;
	unsigned int i, j, size, size_1, size_2;

	if (s1 == NULL) /*If the array is empty*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*count size total*/
	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	size = size_1 + size_2 + 1;
	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	/*Concatenate arrays*/
	if (n >= size_2)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			*(dst + i) = *(s1 + i);

		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			*(dst + i) = *(s2 + j);
			i++;
		}
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			*(dst + i) = *(s1 + i);
		for (j = 0; j < n && *(s2 + j) != '\0'; j++)
		{
			*(dst + i) = *(s2 + j);
			i++;
		}
	}
	return (dst);
}
