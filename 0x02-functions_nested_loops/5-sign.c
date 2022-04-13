#include "main.h"
/**
 * print_sign - check the character c
 * Return: 1 for +, 0 for -, - for 0 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
