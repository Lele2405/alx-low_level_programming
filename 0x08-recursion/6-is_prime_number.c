#include "main.h"

/* Function prototype for actual_prime */
int actual_prime(int n, int i);

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: Number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculate if a number is prime recursively
 * @n: Number to evaluate
 * @i: Iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
