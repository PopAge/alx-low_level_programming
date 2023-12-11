#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h:linked list
 *
 * Return: node
 */

size_t print_listint(const listint_t *h)

{
	size_t node = 0;

		while (h)
		{
			printf("%d\n", h->n);
			node++;
			h = h->next;
		}
		return (node);
}
