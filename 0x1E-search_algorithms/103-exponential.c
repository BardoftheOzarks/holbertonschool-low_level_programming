#include "search_algos.h"
/**
 * exponential_search - searches using the exponential search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to find
 * Return: index of value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right = 1, middle, i;

	if (array != NULL)
	{
		while (right < size && array[right] < value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       right, array[right]);
			left = right;
			right *= 2;
		}
		if (right > size - 1)
			right = size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       left, right);
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
			else
				right = middle - 1;
		}
	}
	return (-1);
}
