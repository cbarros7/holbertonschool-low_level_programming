#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
char charType;
long int longintType;
long long int long_long_Type;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a a float: %lu byte(s)\n", sizeof(float));

return (0);
}
