#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string destination.
 * @src: stting source.
 * @n: an integer.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;/*find the end of dest string*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];/*concatenate str to dest*/
	dest[dest_len + n] = '\0'; /*null terminatebthe result string*/
	return (dest);
}
