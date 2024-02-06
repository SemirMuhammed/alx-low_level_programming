#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: linked list
 *
 * Return: head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	(*head)->next = previous;

	return (*head);
}
