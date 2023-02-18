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

	printf("size of a char: %u byte(s)\n", sizeof(myChar));
	printf("size of an int: %u byte(s)\n", sizeof(myInt));
	printf("size of a long int: %u byte(s)\n", sizeof(myLong));
	printf("size of a long long int: %u byte(s)\n", sizeof(myLong_Long));
	printf("size of a float: %u byte(s)\n", sizeof(myFloat));
	return (0);
}

