#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 * 0 if b is NULL,
 * 0 if there's no more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len = strlen(b);
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
