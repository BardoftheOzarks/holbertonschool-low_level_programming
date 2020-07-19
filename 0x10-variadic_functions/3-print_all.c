#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints urvathang
 * @separator: string to be printed between ints
 * @n: number of strings
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *s, f;
	int i = 0;

	va_start(list, format);
	while (format[i] != '\0' && format != NULL)
	{
		f = format[i];
		switch (f)
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL || s[0] == '\0')
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
		}
		if (format[i + 1] != '\0' && (f == 'c' || f == 'f' || f == 'i' || f == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
