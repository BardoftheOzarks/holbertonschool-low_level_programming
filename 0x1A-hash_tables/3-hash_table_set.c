#include "hash_tables.h"
/**
 * hash_table_set - sets a value to a hash table bucket
 * @ht: the hash table
 * @key: key to hash index
 * @value: value to be stored at index of key
 * Return: 1 for success, 0 for fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *scan, *new = malloc(sizeof(hash_node_t));

	if (new == NULL || ht == NULL || key == NULL || strcmp(key, "") == 0 ||
		value == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	scan = ht->array[index];
	while (scan != NULL)
	{
		if (strcmp(scan->key, key) == 0)
		{
			scan->value = strdup(value);
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
		else
			scan = scan->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
