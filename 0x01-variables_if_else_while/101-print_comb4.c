#include <stdio.h>
/**
 * main - main block
 * Description: Printing combinationg of 3 integerss
 * All must not be the same
 * They should be in ascending order
 * The number 012,120 and 210 are considered same numbers
 * Hence one of it is required.
 * Return: 0
 */
int main(void)
{
	int i, j, k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i + j + k != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
