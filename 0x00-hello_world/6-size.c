#include<stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	long int longInt;
	long long int longlongInt;
	char charType;

	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(intType));
	printf("Size of a long int: %i byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longlongInt));
	printf("Size of a float: %i byte(s)\n", sizeof(floatType));
	return (0);
}
