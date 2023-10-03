#include <stddef.h>

/**
 * _strpbrk - Searches a string for any character in a specified set.
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: A pointer to the first occurrence in the string 's' of any character
 *         from the 'accept' string, or NULL if no such character is found.
 */
char *_strpbrk(char *s, const char *accept)
{
	while (*s)
	{
		for (const char *a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}

		s++;
	}
	return (NULL);
}
