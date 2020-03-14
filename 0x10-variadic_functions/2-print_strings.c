#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n:number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	/* initialize valist for num number of arguments */
	va_start(names, n);

	unsigned int i;

	/* access all the arguments assigned to valist */
	i = 0;
	while (i < n)
	{
		if (separator != NULL)
		{
			separator = va_arg(names, const char *);

			if (i < n - 1)

				printf("%s, ", separator);

			else
				printf("%s\n", separator);

			i++;
		}
	}

	/* clean memory reserved for valist */
	va_end(names);

}