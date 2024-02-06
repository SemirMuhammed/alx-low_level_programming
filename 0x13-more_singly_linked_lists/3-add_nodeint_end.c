#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @listint_t: linked list
 * @n: data
 * 
 * Return: address of new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
    listint_t *current = *head;

    if (new_node == NULL)
        return (NULL);
    
    new_node->n = n;

    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else
    {
        while (current->next != NULL)
            current = current->next; 
        current->next = new_node;
    }

    return (new_node);
}