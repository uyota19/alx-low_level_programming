#include "main.h"
#include <stdlib.h>

/**
 * infinite_add - function that adds two numbers.
 * @n1: first integer
 * @n2: second integer
 * @r: buffer used to store the result
 * @size_r: size of buffer
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, max_len, carry = 0, sum, i;
	char *result;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	max_len = (len1 > len2 ? len1 : len2) + 1;
	result = malloc(sizeof(char) * (max_len + 1));
	if (result == NULL)
		return (0);
	for (i = 0; i < max_len; i++)
	{
		sum = carry;
		if (i < len1)
			sum += n1[len1 - 1 - i] - '0';
		if (i < len2)
			sum += n2[len2 - 1 - i] - '0';
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		result[max_len - 1 - i] = sum + '0';
	}
	result[max_len] = '\0';
	if (max_len + 1 > size_r)
	{
		free(result);
		return (0);
	}
	for (i = 0; i < max_len; i++)
		r[i] = result[i];
	r[i] = '\0';
	free(result);
	return (r);
}
