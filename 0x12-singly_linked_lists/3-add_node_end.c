#include "lists.h"

/**
 * add_node_end - function that adds new node to end of list_t.
 * @head: head pointer.
 * @str: string.
 * Return: the address of new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count, i = 0;
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}

