#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates void * memory
 * @b: input memory int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
