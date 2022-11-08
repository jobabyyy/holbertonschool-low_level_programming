#include "lists.h"

/**
 * pop_listint - function that deletes the head node of listint_t.
 * @head: head pointer
 *
 * Return: 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nnode;

	if (!(*head))
	{
		return (0);
	}
	temp = *head;
	nnode = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (nnode);
}
