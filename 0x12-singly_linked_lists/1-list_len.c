#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
