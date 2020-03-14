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
	unsigned int i;
	const char *str;

	/* initialize valist for num number of arguments */
	va_start(names, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		str = va_arg(names, const char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nill)");
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");

	/* clean memory reserved for valist */
	va_end(names);

}
