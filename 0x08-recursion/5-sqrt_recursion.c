#include "main.h"
/**
 * check_sqrt_recursion - finds the natural square root of a number
 * @n: finding its square root
 * @i: the iterator
 * Return: the natural square root
 */
int check_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: finding its square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt_recursion(n, 0));
}
