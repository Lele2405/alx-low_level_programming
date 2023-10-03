/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination buffer where the string is copied
 * @src: The source string to be copied
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, const char *src)
{
	char *d = dest;

	while (*src)
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
