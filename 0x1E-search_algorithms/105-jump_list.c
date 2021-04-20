#include "search_algos.h"
/**
 * jump_list - finds value in a singly linked list with jump search algorithm
 * @list: pointer to head of list
 * @size: number of nodes in list
 * @value: value to search for
 * Return: index of value or -1 if failed
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int step = sqrt(size);
	listint_t *prev;

	if (list != NULL)
	{
		while (list->n < value)
		{
			prev = list;
			while (list->index < step && list->next != NULL)
				list = list->next;
			step += sqrt(size);
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
			if (list->next == NULL)
				break;
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
