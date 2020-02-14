#include <stdio.h>
#include <math.h>

/**
 * maxPrimeFactors - print the largest prime factor .
 *
 *@n: print int
 * Return: Always 0.
 */

/*Declaring function for to find largest prime factor */
long long maxPrimeFactors(long long n)
{
	long long num_max = -1;

	/*Print the number of 2s that divide n */
	while (n % 2 == 0)
	{
		num_max = 2;
		n >>= 1; /*equivalent to n /= 2 */
	}

	/*The even numbers and iterate only for odd integers*/
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			num_max = i;
			n = n / i;
		}
	}

	/*This condition n is a prime number greater than 2 */
	if (n > 2)
		num_max = n;

	return (num_max);
}

/**
 * main - entry point.
 *
 * Return: Always 0.
 */

/*Driver program to test above function */
int main(void)
{
	long long n;

	n = 612852475143;
	printf("%lld\n", maxPrimeFactors(n));

	return (0);
}
