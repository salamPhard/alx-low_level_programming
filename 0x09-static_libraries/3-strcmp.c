#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: count
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff)
		}
	}
	return (0);
}
