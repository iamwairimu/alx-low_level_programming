#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int ch = 'A';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while(ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
