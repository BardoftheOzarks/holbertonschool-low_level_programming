#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer to listint_t
 */
void free_listint2(listint_t **head)
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
