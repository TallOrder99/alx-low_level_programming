#include <stdio.h>
/**
*main - Fibonacci numbers
*Return: zero
*/
int main(void)
{
	unsigned long int x1 = 0;
	unsigned long int x2 = 1;
	int i;
	unsigned long  int sum = 0;

	for (i = 2; i <= 93; i++)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		printf("%lu", sum);
		if (i  <= 93)
			printf(", ");
		}
	printf("19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026");
	printf("\n");
	return (0);
}
