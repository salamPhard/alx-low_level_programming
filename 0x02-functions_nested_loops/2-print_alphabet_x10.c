#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x 10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
