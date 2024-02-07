#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: linked list
 * @idx: index
 * @n: new node data
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *previous;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (idx)
		{
			if (current->next == NULL && current == NULL)
			{
				free(new_node);
				return (NULL);
			}
			previous = current;
			current = current->next;
			idx--;
		}

		previous->next = new_node;
		new_node->next = current;
	}

	return (new_node);
}
