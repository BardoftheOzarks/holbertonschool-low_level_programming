#include "holberton.h"

/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers 0-14
 */

void more_numbers(void)
{
	int val;

	for (val = 0 ; val <= 14 ; val++)
	{
		if (val > 9)
		{
			_putchar((val / 10) + '0');
		}
		_putchar((val % 10) + '0');
	}
	_putchar('\n');
}
