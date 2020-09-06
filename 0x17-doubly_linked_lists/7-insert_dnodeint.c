#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node
 * @h: head of list
 * @idx: placement of node
 * @n: int to insert
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *before = *h, *after, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (idx > 0)
	{
		if (before == NULL || before->next == NULL)
			return (NULL);
		before = before->next;
		idx--;
	}
	after = before->next;
	before->next = new;
	new->prev = before;
	new->next = after;
	if (after)
		after->prev = new;
	return (new);
}
