#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds all positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int sum = 0;

	while (argv > 0)
	{
		if (isalpha(*argv) == 0 || atoi(*argv) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(*argv);
			argv++;
			argc--;
		}
	}
	printf("%d\n", sum);
	return (0);
}
