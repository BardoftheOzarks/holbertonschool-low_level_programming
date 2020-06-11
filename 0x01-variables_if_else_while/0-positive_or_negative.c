#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints an integer
 *
 * Return: prints a random integer and
 * delcares it positive or negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("&d is positive\n", n);
		else if (n < 0)
		{
		printf("%d is negative\n", n);
		}
	};
	else
	{
	printf("%d is zero\n", n);
	};
	return (0);
}
