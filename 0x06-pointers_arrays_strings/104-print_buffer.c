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
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
			{
				break;
			}
			else
			if (*(b + j) >= ' ' && *(b + j) <= '~')
				printf("%c", *(b + j));
			else
				printf(".");
		}
		printf("\n");
	}
}
