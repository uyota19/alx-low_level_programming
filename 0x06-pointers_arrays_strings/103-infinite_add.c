#include "main.h"

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
	int carry = 0, i = 0, j = 0, sum = 0, len1 = 0, len2 = 0;
	char *tmp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	tmp = r;
	r[size_r - 1] = '\0';
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry != 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (tmp - r >= size_r - 1)
			return (0);
		*tmp++ = sum % 10 + '0';
		carry = sum / 10;
	}
	for (i = 0, j = tmp - r - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}
	return (r);
}

