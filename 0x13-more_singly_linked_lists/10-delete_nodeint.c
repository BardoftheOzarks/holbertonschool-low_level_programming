#include "lists.h"
/**
 * delete_nodeint_at_index - inserts a node
 * @head: head of the list
 * @idx: # of node
 * Return: address of new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp, *scan = *head;
	unsigned int i = 1;

	while (i < idx)
	{
		if (scan->next == NULL)
			return (-1);
		scan = scan->next;
		i++;
	}
	tmp = scan->next;
	scan->next = tmp->next;
	free(tmp);
	return (1);
}
