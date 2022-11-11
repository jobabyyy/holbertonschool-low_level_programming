#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of list
 * @head: head pointer
 * @n: integer
 *
 * Return: address of new element, NUL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nNode;

	nNode = malloc(sizeof(dlistint_t));
	if (!(nNode))
	{
		return (NULL);
	}

	nNode->n = n;
	nNode->prev = NULL;
	nNode->next = *head;

	if (*head)
	{
		(*head)->prev = nNode;
	}
	*head = nNode;
	return (nNode);
}
