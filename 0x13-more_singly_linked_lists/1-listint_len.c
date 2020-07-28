#include "lists.h"
/**
 * listint_len - returns size of listint_t
 * @h: pointer to listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
