#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatonates a string
 * @s1: dest
 * @s2: src
 * @n: length of src to copy
 * Return: pointer to new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dup;
	unsigned int cnt1 = 0, cnt2 = 0;

	if (s1 != NULL)
		while (s1[cnt1] != '\0')
			cnt1++;
	dup = malloc((sizeof(char) * cnt1) + (sizeof(char) * n) + 1);
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	if (s1 != NULL)
		for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
			dup[cnt1] = s1[cnt1];
	if (s2 != NULL)
		for (cnt2 = 0; cnt2 < n; cnt2++)
		{
			dup[cnt1] = s2[cnt2];
			cnt1++;
		}
	dup[cnt1] = '\0';
	return (dup);
}
