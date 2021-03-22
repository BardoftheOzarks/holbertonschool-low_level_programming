#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: number of differences
 */
int _strcmp(char *s1, char *s2)
{
	int size = 0, cnt, total;

	while (s1[size] || s2[size])
		size++;
	for (cnt = 0; cnt < size; cnt++)
	{
		if (s1[cnt] == s2[cnt])
			cnt++;
		else
		{
			total = s1[cnt] - s2[cnt];
			break;
		}
	}
	return (total);
}
