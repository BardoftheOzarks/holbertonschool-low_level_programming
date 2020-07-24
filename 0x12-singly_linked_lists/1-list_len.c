#include "lists.h"
/**
 * list len - returns size of list_t
 * @h: pointer to list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
