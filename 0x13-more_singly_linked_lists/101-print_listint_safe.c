#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of singly linked list
 *
 * Return: number of nodes in list (i)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;
	const listint_t *current;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		i++;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (i);
}
