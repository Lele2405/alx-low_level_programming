#include "main.h"
#include <stddef.h>

int check_pal(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (s == NULL || *s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if a string is a palindrome recursively
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_pal(s, i + 1, len - 1));
}
