#include "holberton.h"
/**
 * _sqrt_recursion - finds natural square root of n
 * @n: an int
 * Return: square root of n, or -1 if none
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (find_sqrt(n, i));
}
/**
 * find_sqrt - finds the square root
 * @n: potential square
 * @i: square counter
 * Return: square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (find_sqrt(n, i + 1));
}
