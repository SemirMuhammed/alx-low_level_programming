#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nc = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nc++;
	}

	return (nc);
}

