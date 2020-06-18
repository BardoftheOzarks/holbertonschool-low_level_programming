#include "holberton.h"

/**
 * print_square - prints square in #
 * @n: input int
 * @l: # length
 * @h: # height
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
	_putchar('\n');
}
