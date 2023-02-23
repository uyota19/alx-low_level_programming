#include "main.h"

/**
 * print_line - draws aa straight line in the terminal.
 * Return: return void.
 * @n: number of times '_' character will be printed.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for ( i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
