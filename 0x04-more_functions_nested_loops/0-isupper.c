#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @C: ASCII value
 * Return: 0 (success)
 */
int _isupper(int c)
{
	int C;

	if (C >= 65 && C < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
