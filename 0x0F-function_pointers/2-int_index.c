#include "function_pointers.h"

/**
 * int_index - performs an action on each member of an array
 * @array: input array
 * @size: number of cells in array
 * @cmp: function that compares values
 * Return: position of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; (*cmp)(array[i]) == 0 && i < size; i++)
		;
	if (i == size)
		return (-1);
	return (i);
}
