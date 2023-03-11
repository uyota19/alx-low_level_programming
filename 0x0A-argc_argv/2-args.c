#include <stdio.h>
#include <string.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: array of command line arguments
 * @argc: the size of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
