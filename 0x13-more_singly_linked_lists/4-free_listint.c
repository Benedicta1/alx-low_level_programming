#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: The head of the link list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
