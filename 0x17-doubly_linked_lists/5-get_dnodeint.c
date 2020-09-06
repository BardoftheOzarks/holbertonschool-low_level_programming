#include "lists.h"
/**
 * get_dnodeint_at_index - Gets de node
 * @head: start of list
 * @index: number of node
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cnt = 0;

	while (cnt < index)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		cnt++;
	}
	return (node);
}
