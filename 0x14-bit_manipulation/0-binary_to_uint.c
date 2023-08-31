#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number,
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		i = 2 * i + (b[j] - '0');
	}
	return (i);
}
