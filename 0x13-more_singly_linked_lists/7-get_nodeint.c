#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of listint_t list
 * @head: head of singly linked list
 * @index: index of node, starts at 0
 *
 * Return: nth node. if node does not exist, return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
