#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		printf("%i", ch);
	putchar('\n');
	return (0);
}
