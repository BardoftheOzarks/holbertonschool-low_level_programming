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
	int cnt1, cnt2;
	dog_t *new_pup;

	cnt1 = strlen(name);
	cnt2 = strlen(owner);
	new_pup = malloc((sizeof(char) * (cnt1 + cnt2 + 2)) + sizeof(float));
	if (new_pup == NULL)
		return (NULL);
        new_pup->name = malloc(sizeof(char) * (cnt1 + 1));
	if (new_pup->name == NULL)
	{
		free(new_pup);
		return (NULL);
	}
	strcpy(new_pup->name, name);
	new_pup->age = age;
	new_pup->owner = malloc(sizeof(char) * (cnt2 + 1));
	if (new_pup->owner == NULL)
	{
		free(new_pup->name);
		free(new_pup);
		return (NULL);
	}
	strcpy(new_pup->owner, owner);
	return (new_pup);
}
