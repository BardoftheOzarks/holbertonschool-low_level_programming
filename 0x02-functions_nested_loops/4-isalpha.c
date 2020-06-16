#include "holberton.h"

/**
 * _isalpha - determines if char is alpha
 * @c: a char or ascii int
 *
 * Return: 1 if alpha
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
