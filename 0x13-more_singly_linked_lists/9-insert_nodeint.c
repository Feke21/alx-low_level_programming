#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given poistion
 * @head: head of singly linked list
 * @idx: index of where list should be added, starts at 0
 * @n: integer element for list
 *
 * Return: the address of new node, or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *main;

	main = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && main != NULL; i++)
		{
			main = main->next;
		}
	}
	if (main == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = main->next;
		main->next = new;
	}
	return (new);
}
