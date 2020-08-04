#include "lists.h"
/**
 * sum_listint - adds sum of all ints
 * @head: start of list
 * Return: sum of all ints
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *scan = head;

	while (scan != NULL)
	{
		sum += scan->n;
		scan = scan->next;
	}
	return (sum);
}
