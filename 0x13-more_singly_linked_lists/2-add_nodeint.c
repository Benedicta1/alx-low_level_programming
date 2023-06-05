#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 * @head: This is a pointer to the first node in the list
 * @n: The data to insert in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
