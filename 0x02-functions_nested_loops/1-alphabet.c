#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);
	_putchar('\n');
}
