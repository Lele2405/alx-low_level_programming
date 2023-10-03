#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The main string to be searched
 * @needle: The substring to search for within haystack
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		int i = 0;
		int match = 1;

		while (needle[i])
		{
			if (haystack[i] != needle[i])
			{
				match = 0;
				break;
			}
			i++;
		}
		if (match)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
