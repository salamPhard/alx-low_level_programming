#include "main.h"
/**
 * print_to_98 - printing a value to 98
 * @n: first parameter
 *
 * Description: Print to 98 from all numbers
 * Return: 0
 */
 void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
}

