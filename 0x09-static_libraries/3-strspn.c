#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring that contains only
 * characters found in a given set.
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
size_t _strspn(const char *s, const char *accept)
{
	size_t count = 0;
	int found = 1;

	while (*s && found)
	{
		found = 0;
	for (const char *a = accept; *a; a++)
	{
	if (*s == *a)
	{
		count++;
		found = 1;
		break;
	}
	}
	if (found)
	{
		s++;
	}
	}

	return (count);
}
