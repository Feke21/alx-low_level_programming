#include "lists.h"

/**
 * sum_dlistint - sum of all data in doubly linked list
 * @head: pointer to list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
