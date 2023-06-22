#include "main.h"
#include "stdio.h"
/**
 * _isupper -  checks for uppercase character
 * @c: ASCII value to check
 * Return: 1 if c is uppercase and 0 if not uppercase
 */
int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
