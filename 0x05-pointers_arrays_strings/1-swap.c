#include "main.h"
/**
 * swap_int - Program to swap integers
 * @a: first parameter
 * @b: second paramet
 *
 * Return: void
 */
void swap_int(int a, int b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
