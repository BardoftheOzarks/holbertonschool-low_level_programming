#include "holberton.h"
/**
 * _strlen - counts string length
 * @s: an string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
