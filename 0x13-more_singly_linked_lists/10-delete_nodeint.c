#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of listint_t list
 * @head: head of singly linked list
 * @index: index of node to be deleted. index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *new;

	old = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && old != NULL; i++)
		{
			old = old->next;
		}
	}
	if (old == NULL)
		return (-1);
	new = old->next;
	if (index != 0)
	{
		old->next = new->next;
		free(new);
	}
	else
	{
		free(old);
		*head = new;
	}
	return (1);
}
