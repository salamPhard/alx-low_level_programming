#include <stdio.h>
/**
 * main - main block
 * Description: Program to print alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char values = 'a';

	for (values = 'a'; values <= 'z'; values++)
	{
		putchar(values);
	}
	putchar("\n");

	return (0);
}
