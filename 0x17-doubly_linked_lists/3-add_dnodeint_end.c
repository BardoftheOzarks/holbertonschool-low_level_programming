#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a list
 * @head: current head of list
 * @n: int to be inserted
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *scan = *head;

	while (scan && scan->next)
		scan = scan->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = scan;
	if (scan != NULL)
		scan->next = new;
	else
		*head = new;
	return (new);
}
