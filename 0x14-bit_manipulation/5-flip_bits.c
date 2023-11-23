#include "main.h"
/**
 * flip_bits - number of bits to flip to another number
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int current;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (current & 1)
			num++;
	}
	return (num);
}
