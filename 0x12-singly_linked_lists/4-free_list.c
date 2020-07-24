#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *scan = head, *tmp;

	while (scan)
	{
		tmp = scan;
		scan = scan->next;
		free(tmp->str);
		free(tmp);
	}
}
