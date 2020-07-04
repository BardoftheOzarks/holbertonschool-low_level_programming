#include <stdio.c>

/**
 * main - prints sum of multiples of 3 & 5
 * Return: 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
