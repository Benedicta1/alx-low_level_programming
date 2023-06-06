#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: The pointer to the first element
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ben;

	if (!head || !*head)
		return (0);
	ben = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (ben);
}
