#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of linked list
 * @h: the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->n == 0)
			printf("0\n");
		else
			printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
