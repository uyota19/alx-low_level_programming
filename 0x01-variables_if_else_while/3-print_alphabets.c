#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print uppercase and lowercase letters'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; ++str)
		putchar(str);
	for (str = 'A'; str <= 'Z'; ++str)
		putchar(str);
	putchar('\n');
	return (0);
}
