#include "lists.h"

/**
 * free_listint - linked list has to be freed.
 * @head: listint_list yet to be freed.
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
