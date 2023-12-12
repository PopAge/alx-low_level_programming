#include "lists.h"

/**
 * find_listint_loop - Searching for the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the loop node
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *upwards = head;
	listint_t *downwards = head;

	if (!head)
		return (NULL);

	while (upwards && downwards && downwards->next)
	{
		downwards = downwards->next->next;
		upwards = upwards->next;
		if (downwards == upwards)
		{
			upwards = head;
			while (upwards != downwards)
			{
				upwards = upwards->next;
				downwards = downwards->next;
			}
			return (downwards);
		}
	}

	return (NULL);
}
