#include "lists.h"

/**
 * free_listint - linked list that has to be freed
 * @head: list yet to be freed
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
