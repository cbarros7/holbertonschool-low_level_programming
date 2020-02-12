#include <stdio.h>
int main()
{
/*Declaring statements*/
int i;
int n = 50;
int num_1 = 1;
int num_2 = 2;
int nextTerm;

for (i = 1; i <= n; ++i) /*Start for*/
{
printf("%d, ", num_1);
nextTerm = num_1 + num_2;
num_1 = num_2;
num_2 = nextTerm;
} /*End for*/
return 0;
}
