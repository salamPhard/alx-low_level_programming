#include "main.h"
/**
 * print_alphabet - prints all alphabets in lower case
 * 
 * Description: Sorted by default
 * Return: 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
