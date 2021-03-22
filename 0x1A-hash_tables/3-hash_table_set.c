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

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
        scan = ht->array[index];
	while (scan != NULL)
        {
                if (strcmp(scan->key, key) == 0)
                {
                        free(scan->value);
                        scan->value = strdup(value);
			return (1);
		}
		scan = scan->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		free(new->key);
	new->value = strdup(value);
	if (new->value == NULL)
		free(new->value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
