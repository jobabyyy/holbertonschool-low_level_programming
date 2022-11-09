#include "lists.h"

/**
 * insert_nodeint_at_index - write function that inserts new node
 * at given position.
 *
 * @idx: unsigned int
 * @head: header pointer
 * @n: integer
 *
 * Return: NULL if failed, address of new node if not.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nNode, *temp = *head;
	unsigned int node;

	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
		return (NULL);

	nNode->n = n;

	if (idx == 0)
	{
		nNode->next = temp;
		*head = nNode;
		return (nNode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	nNode->next = temp->next;
	temp->next = nNode;

	return (nNode);
}
