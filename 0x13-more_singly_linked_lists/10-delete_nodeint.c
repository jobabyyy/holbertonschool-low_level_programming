#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that removes node at index
 * @head: pointer 
 * @index: placement of new node.
 * 
 * Return: -1 if failed, 1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nNode;
	unsigned int n = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*(head)->next;
		free(temp);
	}
	else
	}
		while (n < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);

				i++;
		}
		nNode = temp;
		nNode = nNode->next;
		temp->next = nNode->next;
		free(nNode);
	}
	return (1);
}	
