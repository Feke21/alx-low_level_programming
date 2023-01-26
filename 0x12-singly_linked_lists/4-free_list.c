#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the singly linked list list_t
 * @head: head of singly linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
