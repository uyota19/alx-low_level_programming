#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int next;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf("%d", next);
		if (i < 50)
			printf(", ");
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
