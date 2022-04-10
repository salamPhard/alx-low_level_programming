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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (!(i == k && j == l))
					{
						putchar(k + '0');
						putchar(l + '0');
						putchar(' ');
						putchar(j + '0');
						putchar(i + '0');
						if(!(k + l == 18 && i + j == 17 and j == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
