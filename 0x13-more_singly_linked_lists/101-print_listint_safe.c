#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This counts the number of
 * unique codes in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: 0 if the list is not looped.
 * Otherwise - Number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (tortoise == hen)
		{
			tortoise = head;
			while (tortoise != hen)
			{
				nodes++;
				tortoise = tortoise->next;
				hen = hen->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hen)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hen = (hen->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list safely
 * @head: Pointer to the head of the listint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

