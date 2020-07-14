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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
