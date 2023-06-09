#include "lists.h"

/**
 * find_listint_loop - Write a function that finds the loop in a linked list.
 * @head: The pointer to the node on the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *red = head;
	listint_t *green = head;

	if (!head)
		return (NULL);

	while (red && green && green->next)
	{
		green = green->next->next;
		red = red->next;
		if (green == red)
		{
			red = head;
			while (red != green)
			{
				red = red->next;
				green = green->next;
			}
			return (green);
		}
	}
	return (NULL);
}

