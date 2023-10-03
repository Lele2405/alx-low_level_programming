/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 * @s: The memory area to fill
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}

	return (ptr);
}
