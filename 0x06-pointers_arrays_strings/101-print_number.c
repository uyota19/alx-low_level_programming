#include "main.h"

/**
 * print_number - function that prinys an integer
 * @n: integer to be pribted
 * Return: nothing
 */

void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}
}
