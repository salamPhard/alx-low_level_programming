#include "main.h"
/**
 * is_prime - return if its a prime number
 * @i: first param
 * @j: second param
 *
 * Return: prime number
 */
int is_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

/**
 * is_prime_number - check if its a prime number recursion
 * @n: param
 *
 * Return: return the state of the value
 */
int _is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
