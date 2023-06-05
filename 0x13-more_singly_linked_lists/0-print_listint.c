#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: This is the pointer to the list_t list that will be printed.
 * Return: This will return the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t ben = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ben++;
		h = h->next;
	}

	return (ben);
}
