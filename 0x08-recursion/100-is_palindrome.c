#include "main.h"
/**
 * check_palindrome - checks if string is palindrome
 * @s: string to check
 * @i: the iterator
 * @size: length of string
 * Return: 1 or 0
 */
int check_palindrome(char *s, int i, int size)
{
	if (*(s + i) != *(s + size - 1))
		return (0);
	if (i >= size)
		return (1);
	return (check_palindrome(s, i + 1, size - 1));
}
/**
 * _strlen_recursion - length of string
 * @s: string to calculate its length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - if a string is a palindrome
 * @s: the string to reverse
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
