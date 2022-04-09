#include <stdio.h>
/**
 * main - main block
 * Description: Program to print alphabets in lower
 * then followed by upper case
 * Return: 0
 */
int main(void)
{
	char val = 'a';

	for (val = 'a'; val <= 'z'; val++)
	{
		putchar(val);
	}
	for (val = 'a'; val <= 'z'; val++)
	{
		putchar(toupper(val));
	}
	putchar('\n');

	return (0);
}

