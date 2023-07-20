#include "lists.h"

/**
 * free_dlistint - This frees a linked dlistint_t list.
 * @head: This is the  head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *rec;

	while (head)
	{
		rec = head->next;
		free(head);
		head = rec;
	}
}
