#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password for the 101-crackme program.
 *
 * Return: 0.
 */

int main(void)
{
	char password[80];
	int index = 0;
	int sum = 0;
	int part1;
	int part2;

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		part1 = (sum - 2772) / 2;
		part2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			part1++;
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + part1))
			{
				password[index] -= part1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + part2))
			{
				password[index] -= part2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
