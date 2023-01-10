#include "lists.h"

/**
* add_nodeint - function that adds a new node at the begginning of the list
* @head: address pointer of the head
* @n: integer for the new node
* 
* Return: New elment address, NULL otherwise
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
