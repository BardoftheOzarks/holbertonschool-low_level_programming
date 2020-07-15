#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog from structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog struct, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;
	char *n, *o;

	n = _strdup(name);
	if (n == NULL)
	{	free(n);
		return (NULL);}
	o = _strdup(owner);
	if (o == NULL)
	{
		free(o);
		free(n);
		return (NULL);
	}
	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
	{
		free(new_pup->owner);
		free(new_pup->name);
		free(new_pup);
		free(o);
		free(n);
		return (NULL);
	}
	new_pup->name = n;
	new_pup->age = age;
	new_pup->owner = o;
	return (new_pup);
}
/**
 * _strdup - duplicates a string
 * @str: a string
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	char *dup;
	int counter = 0;

	if (str == NULL)
		return (NULL);
	while (str[counter] != '\0')
		counter++;
	dup = malloc(sizeof(char) * counter + 1);
	if (dup == NULL)
		return (NULL);
	for (counter = 0; str[counter] != '\0'; counter++)
		dup[counter] = str[counter];
	dup[counter] = '\0';
	return (dup);
}
