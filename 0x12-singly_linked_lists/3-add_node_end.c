#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: head of singly linked list
 * @str: string to add
 *
 * Return: address of new element. null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
