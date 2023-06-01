#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: This is a double pointer to the list_t list
 * @str: The string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t ben;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (ben = 0; str[ben]; ben++)
		;

	new->len = ben;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
