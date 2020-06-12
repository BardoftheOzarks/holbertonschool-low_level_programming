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

	for (ch = 'a' ; ch != 'e' && ch != 'q' && ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
