#include "holberton.h"
/**
 * binary_to_uint - converts binary to int
 * @b: input string
 * Return: binary value as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ptr = 0, digit = 1, sum = 0;

	if (b == NULL)
		return (0);
	while (b[ptr] != '\0')
	{
		if (b[ptr] != '0' && b[ptr] != '1')
			return (0);
		ptr++;
	}
	while (ptr--)
	{
		if (b[ptr] == '1')
			sum += digit;
		digit << 1;
	}
	return (sum);
}
