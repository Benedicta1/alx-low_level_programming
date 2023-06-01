#include "lists.h"
#include <stdio.h>

/**
 * list_len - Write a function that returns the number
 * of elements in a linked list_t list
 * @h: This is the pointer to the list_t list that will be printed
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t ben = 0;

	while (h)
	{
		ben++;
		h = h->next;
	}
	return (ben);
}

