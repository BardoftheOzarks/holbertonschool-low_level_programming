#include "holberton.h"

/**
 * _isupper - determines if char is upper case
 * @c: an int
 *
 * Return: 1 if upper, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
