#include "main.h"
/**
 * reset_to_98 - resetting point to the value of parameter
 * @n: this is the parameter
 * return: void
 */
void reset_to_98(int *n)
{
	int *num;

	int x = 98;

	num = &x;
	*n = *num;
}
