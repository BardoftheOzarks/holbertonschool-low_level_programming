#include "lists.h"
/**
 * dlistint_len - counts length of a list
 * @h: pointer to head of list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;
	const dlistint_t *tracer = h;

	while (tracer)
	{
		cnt++;
		tracer = tracer->next;
		if (tracer == h)
			break;
	}
	return (cnt);
}
