#include "main.h"
/**
 * *_memcpy - copy a value in a mem src to mem dest
 * @dest: destination to copy value
 * @src: source to copy from
 * @n: number of n char
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
