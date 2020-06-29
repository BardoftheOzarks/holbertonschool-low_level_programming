#include "holberton.h"
/**
 * _strchr - locates a char
 * @s: source string
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (0);
}
