#include "lists.h"
#include <stdio.h>

/**
 * free_list - Write a function that frees a list_t list.
 * @head: The head of the linked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *ben;

	while ((ben = head) != NULL)
	{
		head = head->next;
		free(ben->str);
		free(ben);
	}
}
