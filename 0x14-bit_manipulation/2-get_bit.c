#include "main.h"
/**
 * get_bit - returns value of bit at a given index
 * @n: the number to search
 * @index: index of the bit
 * Return: the bit value,
 * -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int j;

	if (index > 63)
		return (-1);
	j = (n >> index) & 1;

	return (j);
}
