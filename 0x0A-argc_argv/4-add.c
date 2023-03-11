#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argv: array of command line arguments
 * @argc: size of argv
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int add, i;

	if (argc <=1)
		printf("%d", 0);

