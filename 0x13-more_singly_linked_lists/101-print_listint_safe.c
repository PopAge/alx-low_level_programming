#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - count n of unique node
 * @head: pointer to head of listint_t
 *
 * Return:0 -  if ls is not looped, or n of unique
 * node in ls
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mouse, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mouse = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (mouse == cat)
		{
			mouse = head;
			while (mouse != cat)
			{
				nodes++;
				mouse = mouse->next;
				cat = cat->next;
			}

			mouse = mouse->next;
			while (mouse != cat)
			{
				nodes++;
				mouse = mouse->next;
			}

			return (nodes);
		}

		mouse = mouse->next;
		cat = (cat->next)->next;

	}

	return (0);
}

/**
 * print_listint_safe - const listint_t *head)
 * @head: pointer to head of listint_t ls
 *
 * Return: n nodes in ls
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
