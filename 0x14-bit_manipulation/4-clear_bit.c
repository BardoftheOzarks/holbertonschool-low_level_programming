#include "holberton.h"
/**
 * clear_bit - sets a bit to 0
 * @n: an int
 * @index: position of bit to change
 * Return: 1 if pass, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n, b = 1;

	if (index > 63)
		return (-1);
	a = ~a;
	b = b << index;
	b = a | b;
	b = ~b;
	*n = b;
	return (1);
}
