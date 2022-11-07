#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: pointer
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t NodeCounter = 0;

	while (h)
	{
		NodeCounter++;
		h = h->next;
	}
	return (NodeCounter);
}
