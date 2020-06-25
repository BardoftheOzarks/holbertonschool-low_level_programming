#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: an string
 */
void puts_half(char *str)
{
	int c, length = 0;
	char *begin, *end, temp;

	while (str[c] != '\0')
		c++;
	length = c - 1;
	if (length % 2 == 0)
		c = length / 2;
	else
		c = (length - 1) / 2;
	for(; c < length; c++)
		_putchar(str[c];
}
