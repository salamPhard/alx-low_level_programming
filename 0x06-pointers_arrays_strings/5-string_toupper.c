#include "main.h"
/**
 * string_toupper - change string to uppercase
 * @s: first param
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
