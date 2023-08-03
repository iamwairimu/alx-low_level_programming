#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer
 * @index: index starting from 0,
 * of the bit you want to set
 * Return: 1 (success),
 * -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
