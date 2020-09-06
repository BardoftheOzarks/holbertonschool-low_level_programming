#include "lists.h"
/**
 * print_dlistint - prints elements from a list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;
	const dlistint_t *tracer = h;

	while (tracer)
	{
		printf("%d\n", tracer->n);
		cnt++;
		tracer = tracer->next;
		if (tracer == h)
			break;
	}
	return (cnt);
}
