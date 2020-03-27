#include "holberton.h"

/**
 * count_bits - counts sets bits
 * @n: number to count
 * Return: variable count
 */
unsigned int count_bits(unsigned int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		if ((n & 1) == 1)
			count++;
		n >>= 1; /*is the same n = n >>1*/
	}
	return (count);
}

/**
 * flip_bits - the number flip to get from one number to another
 * @n: number
 * @m: number
 * Return: return count of flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}

