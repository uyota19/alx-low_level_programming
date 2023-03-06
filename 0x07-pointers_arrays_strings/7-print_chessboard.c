#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: an array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char c = a[i][j];

			if (c == ' ')
			{
				_putchar(' ');
			}
			else
			if (c == '.')
			{
				_putchar('.');
			}
			else
			{
				_putchar(c);
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
