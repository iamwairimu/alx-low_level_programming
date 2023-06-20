#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: input number as interger
 * Return: 0 (success)
 */
int print_last_digit(int a)
{
	int c;

	c = a % 10;
	if (c < 0)
	{
		_putchar(-c + 48);
		return (-c);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
