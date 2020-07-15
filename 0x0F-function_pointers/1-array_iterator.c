#include "function_pointers.h"

/**
 * array_iterator - performs an action on each member of an array
 * @array: input array
 * @size: number of cells in array
 * @action: function used on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
