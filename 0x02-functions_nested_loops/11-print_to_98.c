#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
                printf("%d, ", i);
            else
                printf("%d\n", i);
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != 98)
                printf("%d, ", i);
            else
                printf("%d\n", i);
        }
    }
}

int main()
{
    print_to_98(0); // Call the function with a starting value of 0
    return 0;
}
