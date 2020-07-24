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
 * add_node - adds a list_t to beginning
 * @head: pointer to list_t
 * @str: input string
 * Return: * to new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
