#include "main.h"
/**
 * rev_string - reversing a string
 * @s : parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int left, n, tmp;

	left = 0;
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n > left)
	{
		tmp = s[n];
		s[n--] = s[left];
		s[left++] = tmp;
	}
}

