#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
char letter; /*Decarling statement*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);/*print letter*/
}

_putchar('\n'); /*new line*/

}
