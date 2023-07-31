#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: its a pointer
 * @index: the indexof the node starting at 0
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	return (current);
}
