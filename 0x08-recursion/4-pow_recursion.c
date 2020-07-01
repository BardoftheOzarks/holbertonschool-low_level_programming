#include "holberton.h"
/**
 * _pow_recursion - sets x to the power of y
 * @x: an int
 * @y: an int
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return 1;
}
