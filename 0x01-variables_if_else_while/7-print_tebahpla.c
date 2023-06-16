#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char letalphabet;
	
	for (letalphabet = 'z'; letalphabet >= 'a'; letalphabet--);
	{
		putchar(letalphabet);
	}
	putchar('\n');
	return (0);
}
