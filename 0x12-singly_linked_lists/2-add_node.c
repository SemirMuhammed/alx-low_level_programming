#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the linked list
 * @str: the string to be added
 *
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		continue;
	new->len = len;

	new->next = *head;
	(*head) = new;

	return (new);
}

