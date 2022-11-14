#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: starting head node
 *
 * Return: free
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_dlistint(head->next);

	free(head);
}
