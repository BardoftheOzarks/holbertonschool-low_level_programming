#include "holberton.h"

/**
 * print_diagonal - prints \s
 * @n: input int
 *
 * Description: prints \ x int n
 */

void print_diagonal(int n)
{
	int h, l;

	for (h = n ; h > 0 ; h--)
	{
		for (l = n - h ; l > 0 ; l--)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
