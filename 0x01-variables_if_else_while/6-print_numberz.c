#include <stdio.h>
/**
 * main - main block
 * Description: Printing all single digits numbers
 * using putchar function
 * Return: 0
 */
int main(void)
{
	int numberz = 0;

	for (numberz = 0; numberz < 10; numberz++)
	{
		int n = numberz % 10;

		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
