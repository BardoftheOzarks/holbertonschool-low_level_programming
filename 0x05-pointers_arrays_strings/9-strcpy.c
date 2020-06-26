#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: destination for new string
 * @src: source of original string
 *
 * Return: a copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	for (src = 0; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	dest++;
	*dest = '\0';
	return (dest);
}
