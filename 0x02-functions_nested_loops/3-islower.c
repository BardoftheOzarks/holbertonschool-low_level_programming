#include "holberton.h"

/**
 * _islower - determines if char is lower case
 * @c: a char or ascii int
 *
 * Return: 1 for lower case char
 */

int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
