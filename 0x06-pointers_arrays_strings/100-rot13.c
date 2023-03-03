#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: string to be encoded
 * Return: a pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i;
	int j;
	char *result = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13 && str[i] != '\0'; j++)
		{
			if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
				result[i] = str[i] + 13;
			else
			if ((str[i] >= 'n' && str[i] <= 'z')
			|| (str[i] >= 'N' && str[i] <= 'Z'))
				result[i] = str[i] - 13;
			else
				result[i] = str[i];
			i++;
		}
		i--;
	}
	return (result);
}
