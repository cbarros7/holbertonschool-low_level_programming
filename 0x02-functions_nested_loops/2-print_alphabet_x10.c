#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int alphabet; /*Declaring statements*/
int count;

count = 0;
while (count < 10) /*Start while */
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++) /*start for*/
{
_putchar(alphabet);
} /*end for*/

count++;
_putchar('\n'); /*new line*/
} /*end while*/

return (0);

}
