#include "holberton.h"

/**
 * print_triangle - prints triangle in #
 * @size: input int
 *
 * Description: prints triangle made of #
 */

void print_triangle(int size)
{
	int space, height, width;

	for (height = size ; height > 0 ; height--)
	{
		space = height - 1;
		for (; space > 0 ; space--)
		{
			_putchar(' ');
		}
		for (width = size - height + 1 ; width > 0 ; width--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
