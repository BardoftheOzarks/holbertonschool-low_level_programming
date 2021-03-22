#include "holberton.h"

/**
 * _abs - determines absolute value
 * @n: an int
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	int s = n;

	if (n < 0)
	{
		s = n * -1;
		return (s);
	}
	else
	{
		return (n);
	}
}
