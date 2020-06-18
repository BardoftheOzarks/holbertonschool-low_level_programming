#include "holberton.h"

/**
 * print_square - prints square in #
 * @n: input int
 *
 * Description: prints square made of #
 */

void print_square(int n)
{
	int l, h;

	for (h = n ; h > 0 ; h--)
	{
		for (l = n ; l > 0 ; l--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
