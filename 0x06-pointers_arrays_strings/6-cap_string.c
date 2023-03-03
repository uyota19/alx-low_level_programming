#include "main.h"

/**
 * cap_strtring - capitalizestr all wordstr in a string
 * @str: the string to capitalize
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i;
	char strep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Capitalize firstrt letter of each word */
		if ((i == 0 || str[i - 1] == strep[0] || str[i - 1] == strep[1] || str[i - 1] == strep[2] || str[i - 1] == strep[3] || str[i - 1] == strep[4] || str[i - 1] == strep[5] || str[i - 1] == strep[6] || str[i - 1] == strep[7] || str[i - 1] == strep[8] || str[i - 1] == strep[9] || str[i - 1] == strep[10] || str[i - 1] == strep[11]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		/* Convert all other letterstr to lowercastre */
		else
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	return (str);
}
