#include "holberton.h"
/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: length of memory
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;

	while (n--)
		*d++ = *src++;
	return (dest);
}
