#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: an string
 *
 * Return: reverse string
 */
void rev_string(char *s)
{
	int count, begin, end = 0;
	char r[];

	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	for (; begin < count ; begin++)
	{
		r[begin] = s[end];
		end--;
	}
}
