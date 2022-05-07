#include "main.h"
/**
 * *_strncpy - copy a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
