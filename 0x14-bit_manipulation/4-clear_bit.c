#include "main.h"
/**
 * clear_bit - sets a value of a bit to 0
 * @n: pointer
 * @index: index of bit to clear
 * Return: 1 (success),
 * -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
