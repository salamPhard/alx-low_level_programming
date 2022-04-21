#include "main.h"
/**
 * _strcpy - printing an array
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: pointer
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

