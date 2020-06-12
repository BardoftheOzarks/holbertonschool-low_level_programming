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

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
