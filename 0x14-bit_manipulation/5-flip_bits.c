#include "main.h"

/**
 * flip_bits - flip bin num
 * @n: first param
 * @m: second param
 *
 * Return: the num of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsgned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int num_to_flip = 0;

	while (res)
	{
		if (1 & res)
		{
			num_to_flip++;
		}
		res = res >> 1;
	}
	return (num_to_flip);
}
