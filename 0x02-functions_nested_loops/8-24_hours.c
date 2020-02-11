#include "holberton.h"
/**
 * jac_bauer -prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void jack_bauer(void)

{
int a;
int b;
int c;
int d;

for (a = 0; a <= 2; a++) /*First for*/
{
for (b = 0; b <= 3; b++) /*Second for*/
{

for (c = 0; c <= 5; c++) /*Third for*/
{
for (d = 0; d <= 9; d++) /*Fourth for*/
{
_putchar (a + '0');
_putchar (b + '0');
_putchar (':');
_putchar (c + '0');
_putchar (d + '0');
_putchar ('\n');

} /*End fourth for*/

} /*End third for*/

} /*End second for*/

} /*End first for*/


}
