#include "main.h"

/**
 * print_last_digit - Prints last digitt of a number.
 * @n: the valuee to be used.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int r;

	while (n != 0)
	{
		r = n % 10;
		if (-r)
			return (r < 0 ? -r : r);
		_putchar(r + '0');
		return (r);
	}
	return (0);
}

