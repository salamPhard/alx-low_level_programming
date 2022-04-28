#include "main.h"
#include "math.h"
/**
 * _pow_recursion - return the power of a number
 * @x:the value to raise to power
 * @y: the power raised
 *
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y-1));
}
