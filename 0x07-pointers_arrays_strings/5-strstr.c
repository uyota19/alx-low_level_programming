#include "main.h"

/**
 * _strstr - function that locates a string
 * @needle: string to be found
 * @haystack: string to be searched.
 * Return: returns a pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr = haystack;

	while (*haystack_ptr != '\0')
	{
		char *haystack_substr = haystack_ptr;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_substr == *needle_ptr)
		{
			haystack_substr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack_ptr);
		}
		haystack_ptr++;
	}
	return (0);
}
