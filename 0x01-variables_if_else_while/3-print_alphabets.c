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
	char val2 = 'A';

	for (val = 'a'; val <= 'z'; val++)
	{
		putchar(val);
	}
	for (val2 = 'A'; val2 <= 'Z'; val2++)
	{
		putchar(val2);
	}
	putchar('\n');

	return (0);
}

