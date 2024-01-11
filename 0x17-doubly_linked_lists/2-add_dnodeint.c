#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add new node at beginning of list
 * @head: pointer
 * @n: element in list
 * Return: new node at the beginning of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
