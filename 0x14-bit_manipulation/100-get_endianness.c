#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian,
 * 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		int i;
		char c[4];
	} u;

	u.i = 1;

	if (u.c[0] == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
