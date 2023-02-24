#include "main.h"

/**
 * print_square - prints a square followed by a newline
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < size * size; i++)
		{
			if (i % size == 0 && i != 0)
			{
				_putchar('\n');
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
