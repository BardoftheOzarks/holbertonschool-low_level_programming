#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: start of a list
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head, *next = prev->next;

	prev->next = NULL;
	while (next != NULL)
	{
		*head = next;
		next = head->next;
		head->next = prev;
	}
	next->next = *head;
	return (next);
}
