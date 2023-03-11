#include <stdio.h>
#include <string.h>
#define UNUSED(expr) (void)(expr)

/**
 * main - program that prints the number of arguments passed into it.
 * @argv: array of command line arguments
 * @argc: size of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argv); /* silence warnings*/

	printf("%d\n", argc - 1);
	return (0);
}
