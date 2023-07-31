#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: input in the new_node
 * Return: address of new node,
 * NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
