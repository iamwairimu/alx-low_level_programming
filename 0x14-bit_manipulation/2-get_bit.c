#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: the value
 * @index: index starting from 0,
 * of the bit you want to get
 * Return: value of bit at index,
 * or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
