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
	int i = 1;
	int sum = 0;

	while (argc > 1)
	{
		if (isdigit(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
			i++;
			argc--;
		}
	}
	printf("%d\n", sum);
	return (0);
}
