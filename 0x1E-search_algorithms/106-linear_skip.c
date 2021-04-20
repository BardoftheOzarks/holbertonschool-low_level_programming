#include "search_algos.h"
/**
 * linear_skip - searches for a value in a skip list linearly
 * @list: pointer to head of list
 * @value: value to search for
 * Return: index of value or NULL if failed
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev;

	if (list != NULL)
	{
		while (list->n < value)
		{
			prev = list;
			if (list->express != NULL)
				list = list->express;
			else
			{
				while (list->next != NULL)
					list = list->next;
				break;
			}
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, list->index);
		while (prev->n < value && prev->index < list->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
			prev = prev->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
