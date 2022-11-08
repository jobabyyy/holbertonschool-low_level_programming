#include "lists.h"

/**
 * add_nodeint - function that adds a new node at beginning
 * of a listint_t.
 *
 * @n: integer
 * @head: starter pointer
 *
 * Return: NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = newNode;
	return (*head);
}
