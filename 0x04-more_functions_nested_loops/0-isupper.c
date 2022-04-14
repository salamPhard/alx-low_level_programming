#include "main.h"
/**
 * _isupper : check if a letter is upper
 * @c : Parameter
 * Description: Checking if a letter is upper
 * Return: 1 and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

