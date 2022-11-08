#include "lists.h"

/**
 * free_listint - function that frees a listint list.
 * @head: starting pointer
 *
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
