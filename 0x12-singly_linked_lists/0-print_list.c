#include "lists.h"
#include <stdio.h>

/**
 *  print_list - Write a function that prints all the elements of a list_t list
 *  @h: This is the pointer to the list_t list that will be printed.
 *  Return: This will return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t ben = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		ben++;
	}

	return (ben);
}


