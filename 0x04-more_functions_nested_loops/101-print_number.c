#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Void.
 */

void print_number(int n)
{

	int divisor = 1;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
}
