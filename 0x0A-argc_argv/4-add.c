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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]) != 0 || atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
