#include "lists.h"

/**
 * find_listint_loop - Write a function that finds the loop in a linked list.
 * @head: The pointer to the node on the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *red, *green;

	if (!head == NULL || head->next == NULL)
		return (NULL);

	while (red && green && green->next)
	{
		green = green->next->next;
		red = red->next;
		if (green == red)
		{
			red = green;
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
