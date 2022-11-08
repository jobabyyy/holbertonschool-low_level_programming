#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: starting pointer
 * @index: index of node
 *
 * Return: NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int newNode;

	for (newNode = 0; newNode < index; newNode++)
	{
		if (!(head))
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
