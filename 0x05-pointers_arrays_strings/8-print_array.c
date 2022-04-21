#include "main.h"
#include<stdio.h>
/**
 * print_array - printing arrays up to n
 * @a: read from array
 * @n: number of element to read
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ",  a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
