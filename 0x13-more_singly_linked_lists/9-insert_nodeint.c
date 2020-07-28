#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node
 * @head: head of the list
 * @idx: # of node
 * @n: int to be inserted
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *scan = *head;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (i < idx)
	{
		if (scan->next == NULL)
			return (NULL);
		scan = scan->next;
		i++;
	}
	new->next = scan->next;
	scan->next = new;
	return (new);
}
