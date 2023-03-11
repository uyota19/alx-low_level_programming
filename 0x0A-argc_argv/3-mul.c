#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argv: array of command line arguments
 * @argc: size of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
