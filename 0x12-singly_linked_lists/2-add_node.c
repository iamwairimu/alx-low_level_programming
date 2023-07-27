#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: string to add node
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
