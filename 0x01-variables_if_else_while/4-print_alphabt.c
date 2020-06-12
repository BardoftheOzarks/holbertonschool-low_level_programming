#include <stdio.h>

/**
 * main - prints most alphabet
 *
 * Return: prints alphabet in lower case
 * except q and e
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		while (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		}
	putchar('\n');
	return (0);
}
