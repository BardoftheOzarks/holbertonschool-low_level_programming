#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: length of appended bytes
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, write, read = 0;

	while (dest[write] != '\0')
		write++;
	length = write + n;
	for (; write < length; write++, read++)
		dest[write] = src[read];
	dest[write] = '\0';
	return (dest);
}
