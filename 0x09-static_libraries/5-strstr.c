#include "main.h"
#include<stdio.h>
/**
 * _strstr - locate string
 * @haystack: first param
 * @needle: second param
 *
 * Return: a point to the begining of the string
 */
char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}

