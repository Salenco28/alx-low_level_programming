#include "lists.h"

/**
 * sum_listint - This calc the sum of all the data in a listint_t list
 * @head: The first node in the linked list
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sums = 0;
	listint_t *temp = head;

	while (temp)
	{
		sums += temp->n;
		temp = temp->next;
	}

	return (sums);
}

