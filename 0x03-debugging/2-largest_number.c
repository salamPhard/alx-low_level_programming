#include "main.h"

/**
 * largest_number - return the lrgest of 3 numbers
 * @a: first integer
 * @b: second intger
 * @c: third integer
 * Return: latgest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
