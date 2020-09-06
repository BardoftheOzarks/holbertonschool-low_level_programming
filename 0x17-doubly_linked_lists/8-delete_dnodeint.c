#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: head of list
 * @idx: placement of node
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *delete = *head, *before, *after;

	while (idx > 0)
	{
		if (delete == NULL)
			return (-1);
		delete = delete->next;
		idx--;
	}
	if (delete == NULL)
		return (-1);
	before = delete->prev;
	after = delete->next;
	if (before)
		before->next = after;
	else
		*head = after;
	if (after)
		after->prev = before;
	free(delete);
	return (1);
}
