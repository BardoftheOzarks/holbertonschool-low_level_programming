#include "lists.h"
/**
 * sum_dlistint - adds up a list
 * @head: head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *skimmer = head;

	while (skimmer)
	{
		sum += skimmer->n;
		skimmer = skimmer->next;
	}
	return (sum);
}
