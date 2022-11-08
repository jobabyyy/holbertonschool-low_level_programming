#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t NodeCounter = 0;

	while (h)
	{
		NodeCounter++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (NodeCounter);
}
