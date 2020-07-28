#include "lists.h"
/**
 * add_nodeint_end - adds a listint_t to end
 * @head: pointer to listint_t
 * @n: input int
 * Return: * to new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *scan;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		scan = *head;
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = new;
	}
	return (new);
}
