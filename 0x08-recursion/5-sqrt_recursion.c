#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural sq. root of a num.
 * @n: an integer
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrtPrev = _sqrt_recursion(n - 1);

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (sqrtPrev * sqrtPrev == n - 1)
	{
		return (sqrtPrev + 1);
	}
	else
		return (sqrtPrev);

