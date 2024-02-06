#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: linked list
 * 
 * Return: deleted node data
 */
int pop_listint(listint_t **head)
{
    listint_t *current = *head;
    int n = 0;

    if (current == NULL)
        return (0);
    
    *head = (*head)->next;
    n = current->n;
    free(current);

    return (n);
}