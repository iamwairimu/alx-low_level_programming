#include "main.h"
/**
 * clear_bit - sets a bit value to 0 at a given index
 * @n: pointer
 * @index: index
 * Return: 1 9success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
