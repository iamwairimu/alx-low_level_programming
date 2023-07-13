#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: integer to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc((int) b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
