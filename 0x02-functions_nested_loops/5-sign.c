#include "holberton.h"

/**
 * print_sign - determines if var is +/-
 * @n: an int
 *
 * Return: 1 if +, 0 if 0, or -1 if -
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+')
		return (1);
	}
	else
	{
		_putchar('-')
		return (-1);
	}
}
