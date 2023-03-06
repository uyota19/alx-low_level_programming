#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: a character that represents the memory area.
 * @b: a constant byte to fill s with.
 * @n: an unsigned integer
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
