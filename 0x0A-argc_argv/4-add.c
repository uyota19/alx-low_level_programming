#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argv: array of command line arguments
 * @argc: size of argv
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum, i, j, num;

	if (argc == 1)
	{
		putchar(48);
		putchar('\n');
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = 0;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				num = num * 10 + (argv[i][j] - '0');
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
