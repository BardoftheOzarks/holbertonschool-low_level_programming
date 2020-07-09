#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - makes an array of ints
 * @nmemb: width
 * @size: height
 * Return: pointer to new array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int cnt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (cnt = 0; cnt < nmemb; cnt++)
		array[cnt] = 0;
	return ((void *)array);
}
