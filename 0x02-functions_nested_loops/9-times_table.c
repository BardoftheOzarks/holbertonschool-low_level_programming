#include "holberton.h"

/**
 * times_table - prints a table
 *
 * Return: times table 0-9
 */

void times_table(void)
{
	int value, count, mult, tens, ones;

	for (mult = 0 ; mult <= 9 ; mult++)
	{
		value = 0;
		_putchar(value + '0');
		for (count = 1 ; count <= 9 ; count++)
		{
			value = value + mult;
			tens = value / 10;
			ones = value % 10;
			if (count < 9 && value <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else if (count < 9 && value > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else if (count == 9 && value <= 9)
			{
				_putchar(',');
                                _putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
				_putchar('\n');
			}
			else if (count == 9 && value > 9)
			{
				_putchar(',');
                                _putchar(' ');
                                _putchar(tens + '0');
                                _putchar(ones + '0');
				_putchar('\n');
			}
		}
	}
}
