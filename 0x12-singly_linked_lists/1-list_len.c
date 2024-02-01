#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * h: the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t ne;

	for (ne = 0; h != NULL; ne++)
		h = h->next;

	return (ne);
}

