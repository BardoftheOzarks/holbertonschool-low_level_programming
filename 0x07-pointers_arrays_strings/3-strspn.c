#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: source string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, count = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				count++;
			if (a > count)
				return (count);
			b++;
		}
		a++;
	}
	return (count);
}
