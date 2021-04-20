#include "search_algos.h"

/**
 * binary_search - searches a sorted array using the Binary search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to find
 * Return: index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (array != NULL)
		while (left <= right)
		{
			printf("searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i == right)
					printf("%d\n", array[i]);
				else
					printf("%d, ", array[i]);
			}
			middle = (left + right) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				left = middle + 1;
			else
				right = middle - 1;
		}
	return (-1);
}
