#include "lists.h"
/**
 * print_dlistint - A function that prints all the
 * element of a dlistint_t list.
 * @h: This is the pointer to the list
 * Return: This returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}
