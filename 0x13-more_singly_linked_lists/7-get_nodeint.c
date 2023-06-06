#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node of a
 * listint_t linked list.
 * @head: The first node in the linked list
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}
	return (temp ? temp : NULL);
}
