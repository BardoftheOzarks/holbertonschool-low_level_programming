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

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				count++;
			if (a > count)
				return (count);
		}
	}
	return (count);
}
