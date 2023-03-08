#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to power of y.
 * @x: an integer
 * @y: an integer
 * Return: value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
