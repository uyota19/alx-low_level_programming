#include "main.h"

/**
 * cap_string - capitalizestr all wordstr in a string
 * @str: the string to capitalize
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n' || str[i - 1] == ','
			|| str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?'
			|| str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}') && (str[i] >= 'a'
			&& str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
