#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list
 * @head: the linked list
 * @str: the string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		continue;

	new->str = strdup(str);
	new->len = len;

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}

