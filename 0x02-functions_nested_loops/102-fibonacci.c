#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
/*Declaring statements*/
long i;
long n;
long num_1 = 1;
long num_2 = 2;
long nextTerm;

for (i = 2; i < n; ++i) /*Start for*/
{
printf("%ld, ", num_1);
nextTerm = num_1 + num_2;
num_1 = num_2;
num_2 = nextTerm;
} /*End for*/

printf("%ld", num_1);

printf("\n");

return (0);
}
