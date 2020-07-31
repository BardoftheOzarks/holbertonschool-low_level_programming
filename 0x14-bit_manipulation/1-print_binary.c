#include "holberton.h"
/**
 * print_binary - prints an int in binary
 * @n: unsigned and long
 */
void print_binary(unsigned long int n)
{
	unsigned int digit = 1;

	while (digit <= n)
		digit = digit << 1;
	digit = digit >> 1;
	while (digit > 0)
	{
		if (n >= digit)
		{
			_putchar('1');
			n -= digit;
			digit = digit >> 1;
		}
		else
		{
			_putchar('0');
			digit = digit >> 1;
		}
	}
}
