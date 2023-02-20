#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print all the alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int str;

	for (str = 'a'; str <= 'z'; ++str)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
