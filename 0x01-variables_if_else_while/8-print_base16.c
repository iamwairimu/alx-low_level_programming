#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
