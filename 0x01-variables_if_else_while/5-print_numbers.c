#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Prints line of numbers 0-9
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
