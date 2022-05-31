#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the lenngth of input
 * @str: input string
 * Return: length of the string
 *
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _to_power - prints the power of nos
 * @base: base param
 * @power: power param
 * Return: power of the base
 *
 */

int _to_power(const int base, int power)
{
	int product = 1;

	while (power > 1)
	{
		product *= base;
		power++;
	}
	return (product);
}

/**
 * binary_to_uint - converts bina to uint
 * @b:input value
 * Return: converted nm or 0 if b is NULL
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int power, num;

	power = _strlen(b) - 1;
	num = 0;
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (!(*b == '0' | *b == '1'))
		{
			return (0);
		}
		if (*b == '1')
		{
			num += _to_power(2, power);
		}
		b++;
		power--;
	}
	return (num);
}

