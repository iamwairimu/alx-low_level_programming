#include "lists.h"
/**
 * get_dnodeint_at_index - nth node in a list
 * @head: list
 * @index: index of the node
 * Return: nth node in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
