#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog from structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog struct, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *callme, char *human;
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
}
