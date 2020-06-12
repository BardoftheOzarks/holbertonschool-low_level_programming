#include <stdio.h>

/**
 * main - prints list of numbers
 *
 * Return: prints a list of numbers
 * 00 through 99
 * separated by commas and spaces
 */

int main(void)
{
	int t;
	int o;

	for (t = 48 ; t <= 57 ; t++)
	{
		for (o = 48 ; o <= 57 ; o++)
		{
			putchar(t);
			putchar(o);
			if (t < 57 || o < 57)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				o++;
			}
		}
	}
	putchar('\n');
	return (0);
}
