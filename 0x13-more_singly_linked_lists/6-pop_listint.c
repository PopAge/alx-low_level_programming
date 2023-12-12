#include "lists.h"

/**
 * pop_listint - removing the head node of linked list.
 * @head: pointer points to the first element in the liked list
 * Return: deleted element inside the data
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;

	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node);
}

