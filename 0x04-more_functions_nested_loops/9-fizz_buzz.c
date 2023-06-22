#include "stdio.h"
/**
 * main - prints the numbers from 1 to 100
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
			putchar(' ');
		}
		else if (i == 1)
		{
			printf("%d", i);
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
