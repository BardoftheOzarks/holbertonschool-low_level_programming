#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *scan = *head, *tmp;

	while (scan)
	{
		tmp = scan;
		scan = scan->next;
		free(tmp);
	}
	*head = NULL;
}
