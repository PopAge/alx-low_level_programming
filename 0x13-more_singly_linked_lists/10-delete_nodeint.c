#include "lists.h"

/**
 * delete_nodeint_at_index - delete node of linked list
 * @head: first element to point to in linked list
 * @index: delete index of nodes
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int nde = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (nde < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		nde++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
