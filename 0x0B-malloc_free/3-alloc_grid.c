#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - makes an array of ints
 * @width: width
 * @height: height
 * Return: pointer to new array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int wide, tall;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * width);
	if (array == NULL)
		return (NULL);
	for (tall = 0; tall < height; tall++)
	{
		array[tall] = (int *)malloc(sizeof(int) * height);
		if (array == NULL)
			return (NULL);
		for (wide = 0; wide < width; wide++)
			array[tall][wide] = 0;
	}
	return (array);
}
