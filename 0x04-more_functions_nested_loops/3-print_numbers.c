#include "holberton.h"

/**
 * print_numbers - prints numbers
 *
 * Description: prints numbers 0-9
 */

void print_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + '0');
	}
	putchar('\n');
}
