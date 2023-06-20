#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}
