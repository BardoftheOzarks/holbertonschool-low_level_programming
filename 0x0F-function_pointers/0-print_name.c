#include "function_pointers.h"
#include <strings.h>
/**
 * print_name - doesn't actually print anything
 * @name: string for the name
 * @f: function that actually prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
