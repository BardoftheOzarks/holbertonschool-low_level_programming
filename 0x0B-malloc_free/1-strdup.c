#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: a string
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
