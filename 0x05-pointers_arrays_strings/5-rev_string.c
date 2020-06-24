#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: an string
 */
void rev_string(char *s)
{
	int c, length = 0;
	char *begin, *end, temp;

	begin = end = s;
	length = _strlen(s);
	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
/**
 * _strlen - counts string length
 * @s: an string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
