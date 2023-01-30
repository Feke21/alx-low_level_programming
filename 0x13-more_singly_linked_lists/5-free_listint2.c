#include "lists.h"

/**
 * free_listint2 - frees a  linked list listint_t
 * @head: head of singly linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	*head = NULL;
	}
}
