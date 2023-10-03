#include <unistd.h>

/**
 * _puts - Writes a string to stdout
 * @str: The string to write
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
