#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle;

	if (array != NULL)
		while (left <= right)
		{
			middle = left + (((double)(right - left) /
					 (array[right] - array[left])) *
					 (value - array[left]));
			if (middle > right)
			{
				printf("Value checked array[%d] is out of range\n", middle);
				return (-1);
			}
			printf("Value checked array[%d] = [%d]\n", middle, array[middle]);
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
		}
	if (value == array[left])
		return (left);
	return (-1);
}
