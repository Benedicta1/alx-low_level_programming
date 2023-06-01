#include "lists.h"
#include <stdio.h>

/**
 *  print_list - Write a function that prints all the elements of a list_t list
 *  @h: This is the pointer to the list_t list that will be printed.
 *  Return: This will return the number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->string);
		h = h->next;
		b++;
	}

	return (b);
}

