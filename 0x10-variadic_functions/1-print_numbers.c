#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints ints
 * @separator: string to be printed between ints
 * @n: number of ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
		return;
	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%i", va_arg(list, int));
		else
			printf("%i%s", va_arg(list, int), separator);
	}
	printf("%i\n", va_arg(list, int));
	va_end(list);
}
