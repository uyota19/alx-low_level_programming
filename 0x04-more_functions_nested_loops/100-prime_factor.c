#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int i;
	long int largest = 1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
		largest = n;
	printf("%ld\n", largest);
	return (0);
}
