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
	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
				count++;
			b++;
		}
		a++;
	}
	return (count);
}
