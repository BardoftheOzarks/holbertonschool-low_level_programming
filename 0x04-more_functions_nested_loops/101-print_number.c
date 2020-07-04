#include "holberton.h"

/**
 * print_numbers - prints an int
 * @n: input int
 *
 * Description: prints an int via _putchar
 */

void print_numbers(int n)
{
	float p = n;
	int m;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (p >= 10)
		p = p / 10;
	for (m = p % 10 ; p == n ; p * 10)
		_putchar(m + '0');
}
