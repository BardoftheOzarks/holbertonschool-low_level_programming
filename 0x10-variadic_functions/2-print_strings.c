#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between ints
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	if (n == 0)
		return;
	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", s, separator);
	}
	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(list);
}
