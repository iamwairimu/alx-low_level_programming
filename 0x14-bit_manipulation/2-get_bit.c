#include "main.h"
/**
 * get_bit - returns value of bit at a given index
 * @n: the number to find
 * @index: index
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);
	num = (n >> index) & 1;
	return (num);
}
