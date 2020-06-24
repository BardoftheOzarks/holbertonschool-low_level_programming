#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: an string
 *
 * Return: reverse string
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
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
