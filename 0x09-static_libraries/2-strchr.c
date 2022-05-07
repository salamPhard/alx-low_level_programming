#include "main.h"
#include<stdio.h>
/**
 * *_strchr - locating a character
 * @s: locating from the the location s
 * @c: charater to locate
 *
 * Return: ptr to first character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
