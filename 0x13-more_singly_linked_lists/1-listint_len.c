#include "lists.h"

/**
 * listint_len - number of elements in a linked list to return
 * @h: pointer to the linked list listint_t.
 * Return: linked list numbers of node.
 */

size_t listint_len(const listint_t *h)

{
	size_t node_len = 0;
		while (h)
		{
			node_len++;
			h = h->next;
		}
	return (node_len);
}
