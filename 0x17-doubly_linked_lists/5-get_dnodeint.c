#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a specific index
 * @head: pointer to list
 * @index: index of node to get
 *
 * Return: address of the node. if node does not exist, return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
