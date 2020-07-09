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
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
