#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastnumber = n % 10;

if (lastnumber > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, lastnumber);
}

else if (lastnumber < 6 && lastnumber != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastnumber);
}

else
{
printf("Last digit of %i is %i and is 0\n", n, lastnumber);
}


return (0);

}
