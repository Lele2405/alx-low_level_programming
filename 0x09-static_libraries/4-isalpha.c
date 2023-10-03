/**
 * _isalpha - checks if a character is alphabetic (uppercase or lowercase).
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, uppercase or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
