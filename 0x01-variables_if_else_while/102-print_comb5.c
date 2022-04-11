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
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
			}
			if (j * 100 + i != 9899)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');

	return (0);
}
