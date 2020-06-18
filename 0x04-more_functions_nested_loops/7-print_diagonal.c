#include "holberton.h"

/**
 * print_line - prints "_"s
 * @n: input int
 *
 * Description: prints _ x int n
 */

void print_line(int n)
{
	for (; n > 1; n--)
	{
		_putchar(' ');
	}
	if (n > 0)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
