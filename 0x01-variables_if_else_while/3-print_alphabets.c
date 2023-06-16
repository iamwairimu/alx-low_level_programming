#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int alpha1 = 'a';
	int alpha2 = 'A';

	while(alpha1 <= 'z')
	{
		putchar (alpha1);
		alpha1++;
	}
	while(alpha2 <= 'Z')
	{
		putchar (alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}
