#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a listint_t linked list.
 * @head: This points to the first node in the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}
