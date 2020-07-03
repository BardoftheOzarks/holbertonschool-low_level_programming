#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: argument count
 * @argv: unused
 * Return: number of arguments
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
