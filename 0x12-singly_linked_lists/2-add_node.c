#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: head of singly linked list
 * @str: strings to add to list
 *
 * Return: address of new element. null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
