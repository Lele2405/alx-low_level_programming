#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: number of times to print the underscore
 * Return: Always 0
 */

void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
