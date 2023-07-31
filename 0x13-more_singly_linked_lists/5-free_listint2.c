#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list
 * @head: double the pointer
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	free_listint2((*head)->next);
	free(*head);
	*head = NULL;
}
