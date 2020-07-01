#include "holberton.h"
#include "stdio.h"
/**
 * _strstr - searches string for matching char
 * @haystack: a string
 * @needle: a substring
 * Return: needle or null
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;
	char *match = haystack;

	if (needle[0] == '\0')
		return (0);
	for (a = 0, b = 0; haystack[a] != needle[b] && haystack[a] != '\0'; a++)
		continue;
	match = &haystack[a];
	return (match);
}
