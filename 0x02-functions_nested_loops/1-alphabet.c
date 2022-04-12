#include "main.h"
/**
 * Function: Function to print all alphabets
 * in lower case
 * main - main block
 * Description: Call the function
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

}
