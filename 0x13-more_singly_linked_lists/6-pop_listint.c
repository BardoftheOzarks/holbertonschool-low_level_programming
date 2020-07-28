#include "lists.h"
/**
 * pop_listint - frees a listint_t head
 * @head: int from head
 */
int pop_listint(listint_t **head)
{
	listint_t *scan = *head, *tmp;
	int n;
	if (head == NULL)
		return (0);
	n = head->n;
	tmp = scan;
	scan = scan->next;
	free(tmp);
	*head = scan;
	return (n);
}
