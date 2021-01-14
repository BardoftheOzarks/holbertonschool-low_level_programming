#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			printf("Value checked at array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
