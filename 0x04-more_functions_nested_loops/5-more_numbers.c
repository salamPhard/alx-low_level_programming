#include "main.h"
/**
 * more_numbers - print more numbers 
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		char j, k;

		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
		i++;
	}
}
