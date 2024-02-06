#include "lists.h"

/**
 * sum_listint - return sum of all the data of list
 * @head: linked list
 *
 * Return: sum of all data of list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
