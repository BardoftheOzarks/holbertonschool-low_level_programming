#include "lists.h"
/**
 * print_listint - prints all ints in a list of structs
 * @h: pointer to listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
