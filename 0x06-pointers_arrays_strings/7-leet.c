#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: the string to be encoded
 * Return: the encoded string.
 */

char *leet(char *s)
{
	int i;
	int j;
	char *leet_str = s;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				leet_str[i] = numbers[j / 2];
				break;
			}
		}
	}
	return (leet_str);
}
