#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: input int
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
