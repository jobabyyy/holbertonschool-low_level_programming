#include "lists.h"

/**
 * add_node - function that adds a new node at beginning of list
 * @head: pointer
 * @str: string pointer
 * Return: element address, or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	int count, i = 0;
	list_t * newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

