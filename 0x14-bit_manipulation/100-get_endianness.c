#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: o if big endian,
 * 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
