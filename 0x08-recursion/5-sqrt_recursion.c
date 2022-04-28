#include "main.h"
/**
 * is_square_root - find the square root
 * @i: first parameter
 * @j: second param
 *
 * Return: input val
 */
int is_square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + 1));
}

/**
 * _sqrt_recursion - get square root recursion
 * @n: input val
 *
 * Return: natural sqrt of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}

