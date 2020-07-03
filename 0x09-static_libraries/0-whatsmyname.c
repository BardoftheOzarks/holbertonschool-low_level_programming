#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
