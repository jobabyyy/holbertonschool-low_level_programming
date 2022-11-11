#include "lists.h"

/**
 * dlistint_len - function that prints elements of list
 * @h: head pointer
 *
 * Return: number of list elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeEle = 0;

	while (h)
	{
		nodeEle++;
		h = h->next;
	}
	return (nodeEle);
}
