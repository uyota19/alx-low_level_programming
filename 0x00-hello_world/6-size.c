#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'Program that prints the sizes of various types'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myInt;
	char myChar;
	long myLong;
	float myFloat;
	long long myLong_Long;

	printf("Size of a char: %u byte(s)\n", sizeof(myChar));
	printf("Size of an int: %u byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %u byte(s)\n", sizeof(myLong));
	printf("Size of a long long int: %u byte(s)\n", sizeof(myLong_Long));
	printf("Size of a float: %u byte(s)\n", sizeof(myFloat));
	return (0);
}

