#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer
 * @index: index
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1ul << index) | *n);
	return (1);
}
