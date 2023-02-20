#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print all base 16 numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			c = '0' + i;
		else
			c = 'a' + (i - 10);
		putchar(c);
	}
	putchar('\n');
	return (0);
}
