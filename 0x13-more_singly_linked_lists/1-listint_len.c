#include "lists.h"

/**
 * listint_len - return the number of nodes
 * @listint_t: the linked list
 * 
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    if (h == NULL)
        return (0);
    
    while (h != NULL)
    {
        num++;
        h = h->next;
    }

    return (num);
}