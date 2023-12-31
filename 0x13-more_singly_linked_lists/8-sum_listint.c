#include "lists.h"

/**
 * sum_listint - sum of linked_list data
 * @: linked list one
 * @head: node in the linked list
 * Return: sum
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
