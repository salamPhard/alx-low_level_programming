#include "main.h"
/**
 * str_len - get the length of the string
 * @s: input value
 *
 * Return: length of string
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/** 
 * check_palindrome - check for palindrome
 * @s: first param
 * @i: second param
 * @len: third param
 *
 * Return: the value to check
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: param
 *
 * Return: return if its palindrome
 */
int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
