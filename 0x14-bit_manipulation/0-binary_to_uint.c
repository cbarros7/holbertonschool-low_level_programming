#include "holberton.h"

/**
 * convert_num  - converts string a number
 * @b:  string pointer
 * Return: convertion number
 */
unsigned int convert_num(const char *b)
{
	unsigned int i, len, result = 0;

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result = result * 10 + (b[i] - '0');

		else
			return (0);
	}

	return (result);
}


/**
 * binary_to_uint  - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return:   converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, rem, new, j;

	new = convert_num(b);

	while (new != 0)
	{
		rem = new % 10;
		new /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return (dec);

}

