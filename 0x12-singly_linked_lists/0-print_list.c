#include "lists.h"
/**
 * print_list - prints all *str in a list of structs
 * @h: pointer to list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
