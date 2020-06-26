#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: an string
 * @n: length of string
 */
void print_array(int *a, int n)
{
	int b;

	printf("%d", a[0]);
	for (b = 1; b < n; b++)
	{
		printf(", %d", a[b]);
	}
	printf("\n");
}
