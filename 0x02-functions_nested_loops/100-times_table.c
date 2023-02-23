#include "main.h"

/**
 * print_times_table - prints time table of n starting with 0
 * @n: the number of rows and columns
 */

void print_times_table(int n)
{
	int a;
	int b;
	int res;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			res = a * b;
			if (b == 0)
				_putchar(res + '0');
			else
			{
				_putchar(' ');
				if (res >= 100)
				{
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
				}
				else
				if (res >= 10)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res % 10 + '0');
			}
			if (b != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
