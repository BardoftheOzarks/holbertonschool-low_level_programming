#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the operator type from a char
 * @s: an input operator
 * Return: pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
