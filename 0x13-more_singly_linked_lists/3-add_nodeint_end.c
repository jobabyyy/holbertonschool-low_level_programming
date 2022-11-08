#include "lists.h"

/**
 * add_nodeint_end - function that adds node to end of linked list.
 * @head: starting head pointer
 * @n: integer
 *
 * Return: NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;


	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if(*head == NULL)
	{

		newNode->next = *head;
		*head = newNode;
	}

	else
	{
		newNode->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
