#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @c: char to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
