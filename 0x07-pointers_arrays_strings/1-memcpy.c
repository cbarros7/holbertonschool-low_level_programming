#include "holberton.h"
/**
 *_memset -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(src + i) = *dest; /*add 1 position src*/

	} /*END FOR*/

	return (dest);
}
