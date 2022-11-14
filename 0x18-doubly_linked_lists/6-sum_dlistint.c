#include "lists.h"

/**
 * sum_dlistint - function that returns
 * sums of all the data (n) in linked list.
 * @head: starting pointer head
 *
 * Return: 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
