#include "main.h"
/**
 * _isdigit - check if its a digit
 * @c: First parameter
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
