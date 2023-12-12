#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mouse, *cat;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	mouse = head;
	cat = head;

	do {
		mouse = mouse->next;
		cat = cat->next;

		if (cat == NULL || cat->next == NULL)
			return (0);

		cat = cat->next;
		nodes++;
	} while (mouse != cat);
	return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	for (; head != NULL && (index < nodes || nodes == 0); index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	if (nodes > 0)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (nodes);
}

