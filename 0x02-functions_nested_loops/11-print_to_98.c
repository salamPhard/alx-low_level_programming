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
			if (i < 0)
			{
				_putchar('-');
				_putchar((i * -1) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i >= 0 && i < 10)
			{
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i >= 10 && i <= 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar((i - 100) / 10 + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');

}

