#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @str: an string
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n - 1)
	{
		printf("%d, ", *a);
		a++;
		b++;
	}
	printf("%d\n", *a);
}
