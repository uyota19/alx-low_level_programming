#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argv: array of command line arguments
 * @argc: size of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d", (int)(argv + argc) - (int)(argv + 1));
	return (0);
}
