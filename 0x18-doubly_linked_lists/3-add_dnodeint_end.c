#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlistint_t list.
 * @head: starting head pointer
 * @n: integer
 *
 * Return: new element of NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *last;


	NewNode = malloc(sizeof(dlistint_t));

	if (!(NewNode))
	{
		return (NULL);
	}

	NewNode->n = n;

	NewNode->next = NULL;

	if (*head == NULL)
	{
		NewNode->prev = NULL;
		*head = NewNode;
		return (NewNode);
	}

	last = *head;

	while (last->next)
	{
		last = last->next;
	}

	last->next = NewNode;

	NewNode->prev = last;

	return (NewNode);
}
