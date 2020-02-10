#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char letter; /*Decarling statement*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);/*print letter*/
}

_putchar('\n'); /*new line*/

return (0);

}
