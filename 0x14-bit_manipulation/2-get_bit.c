#include "holberton.h"
/**
 * get_bit - find value of a particular bit
 * @n: an int
 * @index: location of int
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);
}
