#include "hash_tables.h"
/**
 * hash_table_print - prints all keys and values in a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, cnt = 0;
	hash_node_t *scan;

	putchar('{');
	while (index <= ht->size)
	{
		if (ht->array[index])
		{
			scan = ht->array[index];
			while (scan)
			{
				if (cnt > 0)
					printf(", ");
				printf("'%s': '%s'", scan->key, scan->value);
				cnt++;
				scan = scan->next;
			}
		}
		index++;
	}
	printf("}\n");
}
