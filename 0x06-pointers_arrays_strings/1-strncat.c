#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: int parameter
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		++len;
		++i;
	}
	dest[len] = '\0';
	return (dest);
}
