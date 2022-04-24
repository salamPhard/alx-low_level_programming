#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++);
	for (j = -1; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
 
