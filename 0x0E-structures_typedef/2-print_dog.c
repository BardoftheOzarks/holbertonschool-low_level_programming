#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints dog struct type
 * @d: input struct
 */
void print_dog(struct dog *d)
{
        int cnt = 0;
        if (d == NULL)
                return;
        if ((*d).name == NULL)
                printf("Name: (nil)\n");
        else
                printf("Name: %s\n", (*d).name);
        if ((*d).age == 0)
                printf("Age: (nil)\n");
        else
                printf("Age: %.6f\n", (*d).age);
        if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n");
}
