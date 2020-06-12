#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: prints a hexadecimal patter
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 102 ; i++)
	{
		while (i > 57 && i < 97)
		{
			i++;
		}
		putchar(i);
		}
	putchar('\n');
	return (0);
}
