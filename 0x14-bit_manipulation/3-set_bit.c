#include "holberton.h"
/**
 * set_bit - sets a bit to 1
 * @n: an int
 * @index: position of bit to change
 * Return: 1 if pass, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n, b = 1;

	b = b << index;
	b = a | b;
	*n = b;
	return (1);
}
