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

	for (t = 48 ; t <= 56 ; t++)
	{
		for (o = 49 ; o <= 57 ; o++)
		{
			if (t <= o)
			{
				putchar(t);
				putchar(o);
				if (t < 56 || o < 57)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					o++;
				}
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
