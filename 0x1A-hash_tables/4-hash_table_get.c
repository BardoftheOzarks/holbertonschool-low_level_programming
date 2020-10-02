#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from a hash table
 * @ht: the hash table
 * @key: key to the value to be retrieved
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *scan;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	scan = ht->array[index];
	while (scan != NULL)
	{
		if (strcmp(scan->key, key) != 0)
			scan = scan->next;
		else
			return (scan->value);
	}
	return (NULL);
}
