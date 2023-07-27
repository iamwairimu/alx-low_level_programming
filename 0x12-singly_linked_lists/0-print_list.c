#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints elements of a list_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		count++;
	}
	printf("\n");
	return (count);
}
