#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in a linked list
 * @head: pointer to the first node
 * @idx: index new node to be added
 * @n: new node to insert in data
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;

	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
