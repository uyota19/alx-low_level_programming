#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer.
 * @b: second integer.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
