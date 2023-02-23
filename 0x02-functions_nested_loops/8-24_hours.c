#include "main.h"

/**
 * print_two_digits - prints two digits
 * @num: number to be printed.
*/

void print_two_digits(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}
/**
 * jack_bauer - print the hours and minutes of jack bauer.
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			print_two_digits(hours);
			_putchar(':');
			print_two_digits(minutes);
			_putchar('\n');
		}
	}
}
