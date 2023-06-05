#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: This is the pointer to the list_t list that will be printed.
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t ben = 0;

	while (h)
	{
		ben++;
		h = h->next;
	}
	return (ben);
}
