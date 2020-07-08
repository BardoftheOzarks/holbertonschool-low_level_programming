#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatonates a string
 * @s1: dest
 * @s2: src
 * Return: pointer to new str
 */

char *str_concat(char *s1, char *s2)
{
	char *dup;
	int cnt1 = 0, cnt2 = 0;

	if (s1 != NULL)
		while (s1[cnt1] != '\0')
			cnt1++;
	if (s2 != NULL)
		while (s2[cnt2] != '\0')
			cnt2++;
	dup = malloc((sizeof(char) * cnt1) + (sizeof(char) * cnt2) + 1);
	if (dup == NULL)
		return (NULL);
	if (s1 != NULL)
		for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
			dup[cnt1] = s1[cnt1];
	if (s2 != NULL)
		for (cnt2 = 0; s2[cnt2] != '\0'; cnt2++)
		{
			dup[cnt1] = s2[cnt2];
			cnt1++;
		}
	dup[cnt1] = '\0';
	return (dup);
}
