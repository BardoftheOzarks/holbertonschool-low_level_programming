#include "holberton.h"
/**
 * _strpbrk - searches string for matching char
 * @s: a string
 * @accept: a substring
 * Return: remainder of string
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b = 0;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				return (&s[a]);
	return (0);
}
