#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural sq. root of a num.
 * @n: an integer
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int left = 1;
	int right = n;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else
		if (mid * mid < n)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
