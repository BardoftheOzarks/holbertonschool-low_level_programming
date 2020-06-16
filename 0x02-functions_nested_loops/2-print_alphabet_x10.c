#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
