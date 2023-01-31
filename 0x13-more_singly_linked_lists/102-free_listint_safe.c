#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of list
 *
 * Return: number of nodes in list (i)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *temp;

	i = 0;
	temp = *h;
	if (h == NULL)
		return (i);

	while (temp != NULL)
	{
		if (temp <= temp->next)
		{
			free(temp);
			i++;
			break;
		}
		*h = temp->next;
		free(temp);
		temp = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
