#include "holberton.h"
/**
 * _islower - return 0 letter not lowercase, 1 letter lowercase
 *
 * Return: 0 not lowercase, 1 lowercase
 */
int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}
