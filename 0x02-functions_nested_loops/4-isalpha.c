#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Value to be used.
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
