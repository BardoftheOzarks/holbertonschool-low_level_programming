#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make input
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int sum;
	int change = 0;

	if (argc != 2)
	{	printf("Error\n");
		return (1); }
	sum = atoi(argv[1]);
	while (sum > 0)
	{
		if (sum >= 25)
		{	change = change + (sum / 25);
			sum = sum % 25;	}
		if (sum >= 10)
		{	change = change + (sum / 10);
			sum = sum % 10;	}
		if (sum >= 5)
		{	change = change + (sum / 5);
			sum = sum % 5;	}
		if (sum >= 2)
		{	change = change + (sum / 2);
			sum = sum % 2;	}
		if (sum == 1)
		{	change = change + 1;
			sum = sum - 1;	}}
	printf("%d\n", change);
	return (0);
}
