#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 * @n: an integer to be evaluated
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
