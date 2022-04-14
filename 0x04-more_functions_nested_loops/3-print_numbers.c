#include "main.h"
/**
 * print_numbers : print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 90; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
}
