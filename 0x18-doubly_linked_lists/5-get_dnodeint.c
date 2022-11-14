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
	dlistint_t *nNode, *temp = head;
	unsigned int node;

	nNode = malloc(sizeof(dlistint_t));
	if (nNode == NULL)
		return (NULL);


	if (index == 0)
	{
		nNode->next = temp;
		head = nNode;
		return (nNode);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	nNode->next = temp->next;
	temp->next = nNode;

	return (nNode);
}
