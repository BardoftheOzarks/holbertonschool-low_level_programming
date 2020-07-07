#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: a string
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	char *dup;
	int counter = 0;

	if (str[counter] == '\0')
		return (NULL);
	p = malloc(sizeof(str));
	while (str[counter] != '\0')
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}
