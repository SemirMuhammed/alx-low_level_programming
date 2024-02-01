#include "lists.h"

/**
 * free_list - frees memory of a list
 * @head: the linked list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

