#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: an array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2 = 0;

	while (i < size)
	{
		sum1 += (a + i * size)[i];
		sum2 += (a + i * size)[size - 1 -i];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
