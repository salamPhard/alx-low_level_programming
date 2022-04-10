#include <stdio.h>
/**
 * main - main
 * Description : Printing two digits numbers
 * No two numbers must be the same
 * The first integer must be less than the next
 * The should not be repeating integer
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;

	for  (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
