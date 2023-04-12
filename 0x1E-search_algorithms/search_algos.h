#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/**
 * struct listint_s - a single linked list
 *
 * @n: integer
 * @index: Node index in list
 * @next: pointer to next node
 *
 * Desc: Node structure for singly linked list
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - adding express lane to singly linked list
 * @n: integer
 * @index: Node index in list
 * @next: pointer to next node
 * @express: pointer to the next node in express lane
 *
 * Desc: singly linked list with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_s;

/* Prototypes for search algorithms */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */
