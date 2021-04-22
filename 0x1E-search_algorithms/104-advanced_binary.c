#include "search_algos.h"
/**
 * advanced_binary - searches a sorted array using the Binary search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to find
 * Return: index of value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (array != NULL && size >= 1)
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
		{
			if (middle > 0 && array[middle - 1] == value)
				return (advanced_binary(array, middle + 1, value));
			return (middle);
		}
		else if (array[middle] < value)
		{
			middle += 1;
			i = advanced_binary(&(array[middle]), size - middle, value);
			if (i == -1)
				return (i);
			return (middle + i);
		}
		else if (array[middle] > value)
			return (advanced_binary(array, middle, value));
	}
	return (-1);
}
