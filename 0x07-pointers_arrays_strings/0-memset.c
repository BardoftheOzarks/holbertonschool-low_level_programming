#include "holberton.h"
/**
 * _memset - fills memory with constant byte
 * @s: a pointer
 * @b: a constant byte
 * @n: number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
		*s++ = b;
	return s;
}
