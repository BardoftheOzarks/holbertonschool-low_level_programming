#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: prints alphabet in lower case
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
