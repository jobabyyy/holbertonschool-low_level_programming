#include "lists.h"

/**
 * print_dlistint_backward - function that prints
 * all elements of a list backwards.
 * @h: head pointer
 *
 * Return: # of nodes.
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodeCounter = 0, newNode;

	if (!(h))
	{
		return (nodeCounter);
	}

	while (h->next)
	{
		h = h->next;
		nodeCounter++;
	}

	newNode = nodeCounter;
	for (; nodeCounter > 0; nodeCounter--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	newNode++;
	return (newNode);
}
