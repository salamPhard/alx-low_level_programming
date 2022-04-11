#include <stdio.h>
/**
 * main - main
 * Description: printing two digits number
 * Ranging from 0 to 99
 * To be printed with 2 digits
 * combinations should be in ascending order
 * The digits 00 01 and 00 10 are same so they should not be seen
 * Return: 0
 */
int main(void)
{
	int i, j, k, l = 0;

	while (l <= 9)
	{
		k = 0;
		while (k <= 9)
		{
			j = 0;
			while (j <= 9)
			{
				i = 0;
				while (i <= 9)
				{
					if (!(l == i && k == j))
					{
						putchar('0' + l);
						putchar('0' + k);
						putchar(' ');
						putchar('0' + j);
						putchar('0' + i);
						if (!(l + k == 18 && i + j == 17 && j == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					i++;
				}
				j++;
			}
			k++;
		}
		l++;
	}	
						
	putchar('\n');

	return (0);
}
