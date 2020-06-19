#include "holberton.h"

/**
 * print_number - prints int
 * @n: an int
 *
 * Description: prints an int via putchar
 */

void print_number(int n)
{
	int clone, reverse;

	clone = n;
	if (clone < 0)
	{
		_putchar('-');
		clone = clone * -1;
	}
	else if (clone == 0)
		_putchar('0');
	while (clone > 0)
	{
		reverse = (reverse * 10) + (clone % 10);
		clone = clone / 10;
	}
	while (reverse > 0)
	{
		_putchar((reverse % 10) + '0');
		reverse = reverse / 10;
	}
	_putchar('\n');
}
