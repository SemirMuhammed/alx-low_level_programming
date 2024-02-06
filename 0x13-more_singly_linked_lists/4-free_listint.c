#include "lists.h"

/**
 * free_listint - free list
 * @head: linked list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
