#include "lists.h"

/**
 * get_nodeint_at_index - node should be return inside linked list
 * @head: first node in the linked list
 * @index: index of the node to  be returned
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int x = 0;

	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
