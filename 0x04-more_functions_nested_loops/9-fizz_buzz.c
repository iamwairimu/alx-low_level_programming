#include "stdio.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line.But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
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
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
