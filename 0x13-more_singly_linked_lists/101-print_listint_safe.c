#include "lists.h"
#include <stdio.h>

size_t find_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a linked list
 * @head: head of linked list
 *
 * Return: number of node_count in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0, node_count = 0;

	if (head == NULL)
		exit(98);

	len = find_listint_len(head);

	while (len == 0)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		head = head->next;
		if (!head)
			return (node_count);
	}

	while (len)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		head = head->next;
		len--;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	node_count++;

	return (node_count);
}

/**
 * find_listint_len - gets length of linked list
 * @head: head of linked list
 *
 * Return: length of linked list
 */
size_t find_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

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
			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
				node_count++;
			}
			return (node_count);
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
