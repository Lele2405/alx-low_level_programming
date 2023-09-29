#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @s: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] < '0' || s[i] > '9')
		return (0);
	i++;
	}

	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 if successful, 1 if there was an error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{

			printf("Error\n");
			return (1);

		}

	}

	printf("%d\n", sum);
	return (0);
}
