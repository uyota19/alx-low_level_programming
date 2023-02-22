#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: value to be used.
 * Return: Always 0.
 */

int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c < 'a' || c > 'z')
			return (0);
		else
			return (1);
	}
	return (0);
}
