#include "lists.h"

/**
 * list_len - print number of elements in list_t
 * @h: pointer to singly linked list
 *
 * Return: number of elemnts in list_t
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
