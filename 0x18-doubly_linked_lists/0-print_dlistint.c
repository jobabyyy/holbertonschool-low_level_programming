#include "lists.h"

/**
 * print_dlistint - function that prints elements of dlistint_t
 * @h: head pointer
 *
 * Return: # of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t NodeCounter = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("%d, %s\n", h->len, h->str);

		}
		NodeCounter++;
		h = h->next;
	}
	return (NodeCounter);
}
