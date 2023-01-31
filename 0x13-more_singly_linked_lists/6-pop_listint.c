#include "lists.h"

/**
 * pop_listsint - deletes head node of listint_t list
 * @head: head node of singly linked list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (*head == NULL)
		return (0);
	
	data = (*head)->n;
	*head = current->next;
	free(current);
	return (data);
}
