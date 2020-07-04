#include <stdio.h>
/**
 * main - prints Fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("%d, ", a);
	printf("%d, ", b);
	printf("%d, ", c);
	for (d = 4; d <= 49; d++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d, ", c);
	}
	a = b;
	b = c;
	c = a + b;
	printf("%d", c);
	return (0);
}
