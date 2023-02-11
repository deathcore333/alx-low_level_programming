#include "lists.h"

/**
* add_nodeint_end - add new node at the end of the list
* @head: the address of the first node
* @n: integer containing address of the new node
*
* Return: NULL on failure
*	New address on success
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{

		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
