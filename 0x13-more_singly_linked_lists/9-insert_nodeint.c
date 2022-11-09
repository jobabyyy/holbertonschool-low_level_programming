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

