#include "lists.h"

/**
 * sum_listint - sum all of the data of listint_t list
 * @head: head of singly linked list
 *
 * Return: sum of linked list data(n). if list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
