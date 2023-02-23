#include <unistd.h>

/**
 * _putchar - Entry point
 *
 * @str: 'the character to print'
 * Description: '_putchar function .c file'
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appriopriately.
 */

int _putchar(char str)
{

	return (write(1, &str, 1));

}
