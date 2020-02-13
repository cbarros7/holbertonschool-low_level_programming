#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
/*Declaring statements*/
long n;
long num_1 = 0;
long num_2 = 1;
long nextTerm;

for (n = 0; n < 50; ++n) /*Start for*/
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
