#include "lists.h"

size_t find_listint_size(listint_t *head);

/**
 * free_listint_safe - frees a linked list
 * @h: head of linked list
 * 
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h, *next;
    size_t size = 0, len = 0;

    len = find_listint_size(*h);
    while (len == 0)
    {
        next = current->next;
        free(current);
        current = next;
        size++;
        if (!current)
        {
            *h = NULL;
            return (size);
        }
    }
    while (len)
    {
        next = current->next;
        free(current);
        current = next;
        size++;
        len--;
    }

    *h = NULL;
    return (size);
}

size_t find_listint_size(listint_t *head)
{
    size_t node_count = 0;
    listint_t *slow, *fast;

    if (head == NULL || head->next == NULL)
        return (0);

    slow = head->next;
    fast = head->next->next; 
    while (fast)
    {
        if (slow == fast)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
                node_count++;
            }

            do {
                slow = slow->next;
                node_count++;
            } while (slow != fast);

            return (node_count++);
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return (0);
}
