#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - adds, subtracts, multiplies, divides, and modulos two int
 * @ac: argument count
 * @av: argument vector array
 * Return: int {+,-,*,/,%} int
 */
int main(int ac, char **av)
{
	int result, a, b, (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (atoi(av[3]) == 0 && (*av[2] == '/' || *av[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	func = get_op_func(av[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
