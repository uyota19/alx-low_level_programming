#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argv: the command line arguments array
 * @argc: the size of the argv array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	argc = 1;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
