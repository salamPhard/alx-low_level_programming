#include <stdio.h>
/**
 * main - main block
 * Description: print all single digits with comma
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
