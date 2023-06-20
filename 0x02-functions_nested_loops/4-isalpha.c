#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: ASCII code character
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 97; && c <= 122) || (c >= 65; && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
