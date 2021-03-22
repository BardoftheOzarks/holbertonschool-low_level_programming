#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int check;

	ht = hash_table_create(1024);
	check = hash_table_set(ht, "betty", "holberton");
	if (check == 0)
		puts("YOU'RE DOING IT WRONG!");
	return (EXIT_SUCCESS);
}
