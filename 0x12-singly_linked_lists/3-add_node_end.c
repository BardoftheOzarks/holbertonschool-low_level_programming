#include "lists.h"
/**
 * _strlen - counts string length
 * @s: an string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 * add_node_end - adds a list_t to end
 * @head: pointer to list_t
 * @str: input string
 * Return: * to new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *scan;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = _strlen(str);
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
