#include "holberton.h"
/**
 * flip_bits - how many bits to flip from n to m
 * @n: first input int
 * @m: second (go figure)
 * Return: amount of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b, sum = 0;

	while (n || m)
	{
		a = n & 1;
		b = m & 1;
		if (a != b)
			sum++;
		n = n >> 1;
		m = m >> 1;
	}
	return (sum);
}
