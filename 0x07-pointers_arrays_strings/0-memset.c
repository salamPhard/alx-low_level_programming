#include "main.h"
/**
 * memset - copy a char in an n area of array
 * @s: pointer to the array
 * @b: character to be replaced
 * @n: number of n times
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
