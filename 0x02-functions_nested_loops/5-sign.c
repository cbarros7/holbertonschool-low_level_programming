#include "holberton.h"
/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * Return: 0 not lowercase, 1 lowercase
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
