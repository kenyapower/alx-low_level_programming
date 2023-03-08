#include "main.h"

/**
 * _pow_recursion - get value of x ^ y.
 * @x: base number
 * @y: exponent to x
 * Return: result of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else 
	{
		return (x *= _pow_recursion(x, y - 1));
	}
}
