#include "lists.h"
/**
 * add_nodeint - adds a listint_t to beginning
 * @head: pointer to listint_t
 * @n: input int
 * Return: * to new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
