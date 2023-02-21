#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print a str followed by a newline to STDERR'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return (1);
}
