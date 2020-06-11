#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates int
 *
 * Return: Returns random number and one's column
 * relation to 5.
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = (n % 10);
	printf("Last digit of ");
	printf("%d ", n);
	printf("is ");
	printf("%d ", s);
	if (s > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (s == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
