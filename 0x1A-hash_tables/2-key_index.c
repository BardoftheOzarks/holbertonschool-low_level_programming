#include "hash_tables.h"
/**
 * key_index - finds the index of a key for a hash table
 * @key: input string
 * @size: size of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
