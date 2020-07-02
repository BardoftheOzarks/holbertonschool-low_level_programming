#include "holberton.h"
/**
 * is_prime_number - determines if prime
 * @n: an int
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	return (find_prime(n, i));
}
/**
 * find_prime - finds prime number
 * @n: potential prime number
 * @i: factor checker
 * Return: prime number boolean
 */
int find_prime(int n, int i)
{
	if (n <= 2)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	return (find_prime(n, i + 1));
}
