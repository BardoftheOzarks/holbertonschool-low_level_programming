#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *scan, *next;

	if (ht == NULL)
		return;
	while (index <= ht->size)
	{
		scan = ht->array[index];
		while (scan)
		{
			next = scan->next;
			free(scan->key);
			free(scan->value);
			free(scan);
			scan = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
