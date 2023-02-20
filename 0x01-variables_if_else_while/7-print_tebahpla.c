#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print the lowercase letters in reverse'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
		putchar(str);
	putchar('\n');
	return (0);
}
