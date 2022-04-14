#include "main.h"
/**
 * print_times_table - prints times table
 * @n : the parameter to use
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0, b, prod;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			prod = a * b;
			if (b == 0)
				_putchar('0' + prod);
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod / 100) + '0');
				_putchar((prod -  100) / 10 + '0');
				_putchar((prod % 10) + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
