#include "search_algos.h"
/**
 * jump_search - searches for a value in an array
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size), prev, i;

	if (array != NULL)
	{
		for (i = 0; i < size; i += step)
		{
			if (array[i] >= value)
				break;
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		prev = i - step;
		printf("Value found between indexes [%d] and [%d]\n", prev, i);
		for (i = prev; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
