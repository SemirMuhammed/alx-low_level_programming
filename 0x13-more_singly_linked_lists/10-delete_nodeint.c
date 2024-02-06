#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: linked list
 * @index: index
 *
 * Return: 1 on Success or -1 on Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous;

	if (current == NULL)
		return (-1);

	while (index)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
		index--;
	}

	if (current == *head)
		*head = (*head)->next;
	else
		previous->next = current->next;

	free(current);

	return (1);
}
