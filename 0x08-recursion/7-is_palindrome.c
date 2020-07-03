#include "holberton.h"
/**
 * is_palindrome - determines if palindrome
 * @s: a string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = _strlen_recursion(s) - 1;
	return (find_palindrome(s, start, end));
}
/**
 * _strlen_recursion - counts a string length
 * @s: a string
 * Return: count
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * find_palindrome - finds palindrome
 * @s: a string
 * @start: a 0
 * @end: strlen
 * Return: palindrome boolean
 */
int find_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	else if (start >= end)
		return (1);
	else
		return (find_palindrome(s, start + 1, end - 1));
}
