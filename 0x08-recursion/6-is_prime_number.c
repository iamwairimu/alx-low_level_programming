#include "main.h"
#include "stdio.h"
int actual_prime_number(int n, int i);
/**
 * is_prime_number - if the input integer is a prime number
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (actual_prime_number(n, 1));
}
/**
 * actual_prime_number - if input integer is a prime number
 * @n: input
 * @i: iterator
 * Return: 1 or 0
 */
int actual_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i  == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (actual_prime_number(n, i + 1));
}
