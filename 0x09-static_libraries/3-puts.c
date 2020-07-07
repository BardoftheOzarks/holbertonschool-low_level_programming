#include "holberton.h"
/**
 * _puts - prints a string
 * @str: an string
 *
 * Return: string
 */
void _puts(char *str)
{
	int count;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
