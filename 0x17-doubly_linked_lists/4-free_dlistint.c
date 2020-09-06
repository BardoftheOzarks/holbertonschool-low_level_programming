#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *Willy = head;

	while (Willy)
	{
		head = head->next;
		free(Willy);
		Willy = head;
	}
}
