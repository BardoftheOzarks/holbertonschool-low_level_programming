#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - doggie data
 * @name: dog's name
 * @age: age in 0.0 format
 * @owner: puppy parents
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
