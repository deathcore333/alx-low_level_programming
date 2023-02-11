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
	const list_t *current = h;

	while (current != NULL)
	{	
		printf("[%d] %s\n", current->len, current->str != NULL / 
			current->str: "(nil)"); current = current->next;
		nodes++;
	}

	return (nodes);
}
