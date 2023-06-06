#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: The pointer to the first element in the list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ben = NULL;

	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (b < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		b++;
	}
	ben = temp->next;
	temp->next = ben->next;
	free(ben);

	return (1);
}
