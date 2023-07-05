#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: length of string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int longs = 0;

	if (*s)
	{
		longs++;
		longs += _strlen_recursion(s + 1);
	}
	return (longs);
}
