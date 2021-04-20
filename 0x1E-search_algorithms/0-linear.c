#include "search_algos.h"
/**
 * linear_search - searches an array sequentially
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value being searched for
 * Return: index of value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
