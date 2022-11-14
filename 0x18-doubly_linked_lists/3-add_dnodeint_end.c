#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlistint_t list.
 * @h: starting head pointer
 * @n: integer
 *
 * Return: new element of NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t Head* NewNode = (dlistint_t Head*)malloc(sizeof(dlistint_t Head));

	dlistint_t Head* last = **head;

	NewNode->data = n;

	NewNode-> = NULL;

	if (**head == NULL)
	{
		NewNode->prev = NULL;
		**head = NewNode;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = NewNode;

	NewNode->prev = last;

	return;
}
