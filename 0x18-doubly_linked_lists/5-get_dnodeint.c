#include "lists.h"

/**
 * get_dnodeint_at_index - write function that inserts new node
 * at given position.
 *
 * @index: unsigned int
 * @head: header pointer
 *
 * Return: NULL if failed, address of new node if not.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nNode;

	for (nNode = 0; nNode < index; nNode++)
	{
		if (!(head))
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
