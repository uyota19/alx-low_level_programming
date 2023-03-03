#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer.
 * @b: pointer
 * @size: size in bytes
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", *(unsigned char *)(b + j));
			else
				printf("  ");
			if (j + 1 < size)
				printf("%02x ", *(unsigned char *)(b + j + 1));
			else
				printf("   ");
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				printf(" ");
			else
			if (*(b + j) >= ' ' && *(b + j) <= '~')
				printf("%c", *(b + j));
			else
				printf(".");
		}
		printf("\n");
	}
}
