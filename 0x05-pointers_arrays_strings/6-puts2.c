#include "holberton.h"

/**
 * puts2 - prints every other char
 * @str: an string
 */
void puts2(char *str)
{
	int z;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
			z++;
	}
	_putchar('\n');
}
