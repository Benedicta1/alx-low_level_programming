#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: This is a double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t ben;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (ben = 0; str[ben]; ben++)
		;

	new->len = ben;
	new->next = *head;
	*head = new;

	return (*head);
}
