#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: The pointer to the node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ben = 0;
	int odd;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		odd = *h - (*h)->next;
		if (odd > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			ben++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ben++;
			break;
		}
	}

	*h = NULL;

	return (ben);
}
