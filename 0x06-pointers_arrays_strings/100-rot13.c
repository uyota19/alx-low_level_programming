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
	char *result;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	result = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (result);
}
