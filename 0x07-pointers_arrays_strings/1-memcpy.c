#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: character to fill dest
 * @n: an integer to be used
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}
