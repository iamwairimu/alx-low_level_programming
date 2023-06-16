#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}

