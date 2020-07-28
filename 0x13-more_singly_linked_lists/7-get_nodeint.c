#include "lists.h"
/**
 * get_nodeint - finds a node
 * @head: head of the list
 * @index: # of node
 * Return: int from head
 */
listint_t *get_nodeint(listint_t **head, unsigned int index)
{
	listint_t *scan = *head;
	int n = 0;

	while (n <= index)
	{
		if (scan->next == NULL)
			return (NULL);
		scan = scan->next;
		n++;
	}
	return (scan);
}
