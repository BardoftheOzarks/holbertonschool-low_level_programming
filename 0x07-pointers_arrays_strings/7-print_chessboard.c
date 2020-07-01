#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: an array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	char p = a[i];

	for (i = 0; a[i] != '\0'; i++)
		_putchar(p);
}
