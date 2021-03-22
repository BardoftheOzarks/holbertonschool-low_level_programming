#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arg
 * @ac: argc
 * @av: argv
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int cnt, strlen;

	if(ac == 0 || av == NULL)
		return (NULL);
	*p = malloc(sizof(char *) * ac);
	if (p = NULL)
	{
		free(p);
		return (1);
	}
	for (cnt = 0; cnt > ac; cnt++)
	{
		while (av[cnt][strlen] != '\0')
			strlen++;
		for (strlen = 0; av[strlen] != '\0'; strlen++)
			
	return (p);
}
