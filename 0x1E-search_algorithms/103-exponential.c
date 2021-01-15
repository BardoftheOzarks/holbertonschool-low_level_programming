#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int middle, i, bound, prev;

	if (array != NULL)
	{
		for (bound = 1; bound < size &&
			     array[bound] < value; bound *= 2)
		{
			printf("Value checked array[%d] = [%d]\n",
			       bound, array[bound]);
			prev = bound;
		}
		if (bound >= size)
			bound = size - 1;
		printf("Value found between indexes [%d] and [%d]\n",
		       prev, bound);
		while (prev <= bound)
		{
			printf("Searching in array: ");
			for (i = prev; i <= bound; i++)
			{
				if (i == bound)
					printf("%d\n", array[i]);
				else
					printf("%d, ", array[i]);
			}
			middle = (prev + bound) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				prev = middle + 1;
			else if (array[middle] > value)
				bound = middle - 1;
		}
	}
	return (-1);
}
