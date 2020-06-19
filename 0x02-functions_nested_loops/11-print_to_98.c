#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints int to 98
 * @n: an int
 *
 * Return: prints a sequence of numbers to 98
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
		printf("98\n");
}
