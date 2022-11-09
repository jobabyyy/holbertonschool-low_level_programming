#include "lists.h"

/**
 * sum_listint - write function that returns sum of all data (n)
 * of a listint_t linked list.
 *
 * @head: head
 * Return: 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
