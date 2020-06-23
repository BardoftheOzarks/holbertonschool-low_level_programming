#include "holberton.h"
/**
 * swap_int - swaps values of two int
 * @a: an int
 * @b: an int
 *
 * Return: swaps the value of two int via pointers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
