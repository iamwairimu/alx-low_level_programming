#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and initialize with specific char
 * @size: the array size
 * @c: the array
 * Return: pointer to array and NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
