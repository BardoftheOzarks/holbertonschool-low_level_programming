#include "holberton.h"

/**
 * print_line - prints "_"s
 *
 * Description: prints _ x int n
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
			_putchar('_');
	}
	_putchar('\n');
}
