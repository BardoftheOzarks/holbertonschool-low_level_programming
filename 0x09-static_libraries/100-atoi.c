#include "holberton.h"

/**
 * _atoi - converts string to int
 * @s: an string
 */
int _atoi(char *s)
{
	int count, num = 0;

	for (count = 0; s[count]; count++)
	{
		num = num * 10;
		num = num + (s[count] - 47);
	}
	return (num);
}
