#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous mem alloc
 * @old_size: self explanatory
 * @new_size: really? figure it out
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	if (old_size != new_size)
		return (ptr);
	return;
}
