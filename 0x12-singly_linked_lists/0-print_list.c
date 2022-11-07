#include "lists.h"

/**
 * print_list - print elements of lists_h
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t NodeCounter = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		NodeCounter++;
		h = h->next;
	}
	return (NodeCounter);
}

