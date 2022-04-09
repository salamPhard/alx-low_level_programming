#include <stdio.h>
/**
 * main - main block
 * Description: printing a to z in reverse
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
