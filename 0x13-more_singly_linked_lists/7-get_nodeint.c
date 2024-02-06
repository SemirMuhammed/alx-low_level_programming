#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 * @head: linked list
 * @index: given index
 * 
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;

    if (index == 0 || current == NULL)
        return (NULL);

    while (index)
    {
        current = current->next;
        index--;
    }

    return (current);
}
