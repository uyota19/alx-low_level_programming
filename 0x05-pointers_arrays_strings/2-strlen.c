#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @str: a pointer
 * Return: 0
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
