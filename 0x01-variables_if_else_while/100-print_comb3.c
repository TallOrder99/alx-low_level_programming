#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a,b;

	for (a = 0; a < 10; a++)
	{
		
	    for (b = 0; b < 10; b++)
	    {
		    putchar(a + '0');
		    putchar(b + '0');
			  if (a < 9)
			  {
				  putchar(',');
				  putchar(' ');
			  }
	    }
	}
	putchar('\n');

	return (0);
}
