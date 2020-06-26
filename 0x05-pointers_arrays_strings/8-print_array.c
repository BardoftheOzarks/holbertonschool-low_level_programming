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

	for (b = 0; b < n; b++)
	{
		if (b == (n - 1))
			printf("%d\n", a[b]);
		else
			printf("%d, ", a[b]);
	}
}
