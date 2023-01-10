#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements ofa list_t
 * @h: the list_t list
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		nodes++;
		h = h->next;
	}

	return (nodes);
}
