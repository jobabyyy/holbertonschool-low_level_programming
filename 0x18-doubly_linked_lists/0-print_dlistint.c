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

	while (h) 			 /** while h is true */
	{
		printf("%d\n", h->n);   /** print num w/new line, h is pointing to node */
		NodeCounter++;		/** increase to next */
		h = h->next;		/** head = to head pointing to next node */
	}
	return (NodeCounter);		/** return the number of elements in node */
}
