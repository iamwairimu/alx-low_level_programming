#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer
 * Returns: size of list that was free’d,
 * if list is empty, return 0
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
		count++;
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
