#include "lists.h"

/**
 * delete_dnodeint_at_index - function that removes node at index
 * @head: pointer
 * @index: placement of new node.
 *
 * Return: -1 if failed, 1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nNode = *head;
	unsigned int i;

	if (nNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nNode);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (nNode->next == NULL)
			return (-1);

		nNode = nNode->next;
	}

	temp = nNode->next;
	nNode->next = temp->next;
	free(temp);
	return (1);
}
