#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints lined list elements
 * @h: pointer to the list_t
 * Return: printed first
 */

size_t print_list(const list_t *h)

{
	size_t node = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	node++;
	}
	return (node);
}
