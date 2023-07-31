#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer
 * Returns: size of list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;

	if (*h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
		count++;
	}
	*h = NULL;
	return (count);
}
