#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout.
 * @str: string to be printed.
 * Return: nothing.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
