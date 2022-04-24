#include "main.h"
/**
 * _astrcat - concatenate two string
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; ++i; ++len)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
 
