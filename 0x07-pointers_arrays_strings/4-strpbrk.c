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

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (&s[a]);
			b++;
		}
		a++;
	}
	return (0);
}
