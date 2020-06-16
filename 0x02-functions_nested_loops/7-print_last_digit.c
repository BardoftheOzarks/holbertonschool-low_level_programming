#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: an int
 *
 * Return: last digit of int
 */

int print_last_digit(int n)
{
	int s;
	int q;

	if (n < 0)
	{
		s = n * -1;
		q = s % 10;
		_putchar(q + '0');
		return (q);
	}
	else
	{
		q = n % 10;
		_putchar(q + '0');
		return (q);
	}
}
