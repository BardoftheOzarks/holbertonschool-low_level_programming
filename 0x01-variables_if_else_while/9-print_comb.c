#include <stdio.h>

/**
 * main - prints list of numbers
 *
 * Return: prints a list of numbers
 * separated by commas and spaces
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
