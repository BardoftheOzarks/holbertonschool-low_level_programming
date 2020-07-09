#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - prints an array
 * @min: minimum
 * @max: maximum
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[min] = min;
		min++;
	}
	return (array);
}
