#include <stdio.h>
/**
 * main - main block
 * Descript: Printing all hexadecimal values
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char i = 'a';

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (i = 'a'; i < 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
