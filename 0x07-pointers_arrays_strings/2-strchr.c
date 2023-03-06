#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character to fill s
 * @s: destination
 * Return: Returns a pointer to s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
