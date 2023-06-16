#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine whether positive or negative
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	sprand(time(0));
	n = rand() RAND_MAX / 2;
	if (n > 0)
	{
		prinf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
