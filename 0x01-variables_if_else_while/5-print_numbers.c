#include <stdio.h>
/**
 * main - prints all single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;
	do {
		printf("%d\n", a);
		a++;
	} while (a < 10);
	return (0);
}
