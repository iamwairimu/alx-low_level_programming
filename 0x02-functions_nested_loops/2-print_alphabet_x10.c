#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet_x10(void);
;
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 92; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
