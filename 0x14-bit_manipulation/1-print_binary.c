#include "holberton.h"
/**
 * print_binary - prints an int in binary
 * @n: unsigned and long
 */
void print_binary(unsigned long int n)
{
		if (n == 1)
		{
			_putchar('1');
			return;
		}
		else if (n == 0)
		{
			_putchar('0');
			return;
		}
		print_binary(n >> 1);
		putchar('0' + (n & 1));
}
