#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - init array
 * @size: size of array
 * @c: a char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	while (size != 0)
	{
		p[size - 1] = c;
		size--;
	}
	return (p);
}
