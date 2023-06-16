#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int ch = 'A';

	while(ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	while(ch <= 'A')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
