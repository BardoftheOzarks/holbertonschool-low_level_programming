#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: a pointer
 * @n: length of a string
 */
void print_array(int *a, int n)
{
	int c = 0;

	while (c < n - 1)
	{
		printf("%d, ", *a);
		a++;
		c++;
	}
	printf("%d\n", *a);
}
