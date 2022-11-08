#include "lists.h"

/**
 * listint_len - function that lists the elements of a linked list.
 * @h: head pointer
 *
 * Return: elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t NodeCounter = 0;

	while (h)
	{
		NodeCounter++;
		h = h->next; /**moves pointer to head of next node*/
	}
	return (NodeCounter);
}
