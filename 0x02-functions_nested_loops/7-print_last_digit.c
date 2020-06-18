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

	s = n % 10;
	if (s < 0)
	{
		s = s * -1;
		_putchar(s + '0');
		return (s);
	}
	else
	{
		_putchar(s + '0');
		return (s);
	}
}
