#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (array != NULL)
		while (left <= right)
		{
			printf("Searching in array: ");
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
			else if (array[middle] > value)
				right = middle - 1;
		}
	return (-1);
}
