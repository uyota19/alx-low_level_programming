#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 * @n: the valuee to be used.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;
	else
		n = n;
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
