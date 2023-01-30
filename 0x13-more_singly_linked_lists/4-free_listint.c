#include "lists.h"

/**
 * free_listint - frees the singly linked list listint_t
 * @head: head of singly linked list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
