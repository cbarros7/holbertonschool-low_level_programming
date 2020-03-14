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
	const char *array = separator;

	/* initialize valist for num number of arguments */
	va_start(names, n);

	/* access all the arguments assigned to valist */
	i = 0;
	while (i < n)
	{
		array = va_arg(names, const char *);

		if (array != NULL)
		{
			printf("%s", array);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}

		else
		{
			printf("(nill)");
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	/* clean memory reserved for valist */
	va_end(names);
	printf("\n");
}
