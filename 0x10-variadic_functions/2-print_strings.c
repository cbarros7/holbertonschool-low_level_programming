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
	const char *array = separator;

	/* access all the arguments assigned to valist */
	i = 0;
	while (i < n)
	{
		if (separator == NULL)
			printf("nill");

		array = va_arg(names, const char *);


		printf("%s", array);
		if (i < n - 1 && (separator != NULL))
			printf("%s", separator);


		i++;
	}

	printf("\n");

	/* clean memory reserved for valist */
	va_end(names);

}
