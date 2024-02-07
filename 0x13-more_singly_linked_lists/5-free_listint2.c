#include "lists.h"

/**
 * free_listint2 - free list and set head to NULL
 * @head: linked list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head)
	{
		current = *head;
		if (current == NULL)
			return;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = NULL;
	}

}
