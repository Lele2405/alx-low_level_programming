#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string,
 * or 0 if the string is not a valid integer
 */
int _atoi(char *s)
{
	int n = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
	else
	{
	return (0);
	}

	}

	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error: Please provide exactly two integers as command line\n");
		printf("arguments.\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error: Invalid integer input. Please provide valid integers.\n");
		return (1);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
