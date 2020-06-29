#include "holberton.h"
/**
 * _memset - fills memory with constant byte
 * @s: a pointer
 * @b: a constant byte
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	while (n-- > 0)
		*p++ = b;
	return (s);
}
