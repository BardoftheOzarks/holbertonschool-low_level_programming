#include "search_algos.h"
/**
 * exponential_search - searches using the exponential search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to find
 * Return: index of value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{	size_t left, right = 0, middle, i;

	if (array != NULL)
	{
		while (array[right] < value)
		{
			left = right;
			if (right < 1)
				right++;
			else
				right = right * 2;
			if (right >= size - 1)
			{	right = size - 1;
				break;			}
			printf("Value checked at index [%lu] = [%d]\n",
			       right, array[right]);                }
		printf("Value found between indexes [%lu] and [%lu]\n",
		       left, right);
		while (left <= right)
		{	printf("Searching in array: ");
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
				while (array[middle - 1] == value)
					middle--;
				return (middle);
			}
			else if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
		}
	}
	return (-1);
}
