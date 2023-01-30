#include "lists.h"

/**
 * add_nodeint - adds node at start of listint_t list
 * @head: head of singly linked list
 * @n: numbers to add to list
 *
 * Return: address of new element. null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
