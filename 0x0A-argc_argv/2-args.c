#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints agruments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}
	exit(EXIT_SUCCESS);
}
