#include "main.h"
/**
 * print_to_98 - printing a value to 98
 * @n: first parameter
 *
 * Description: Print to 98 from all numbers
 * Return: 0
 */
 void print_to_98(int n)
{
	while ( n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}

