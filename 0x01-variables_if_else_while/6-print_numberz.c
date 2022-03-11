#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}
