#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: a string
 * @accept: a string
 * Return: returns a pointer to the byte s.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}
			q++;
		}
		p++;
	}
	return (0);
}

