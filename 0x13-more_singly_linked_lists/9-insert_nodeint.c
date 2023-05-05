#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: Pointer to head address
 * @idx: index where new node will be inserted
 * @n: int for new node
 * Return: if fails NULL, else new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nd, *cpy = *head;
	unsigned int node;

	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
	return (NULL);
	new_nd->n = n;
	if (idx == 0)
	{
	new_nd->next = cpy;
	*head = new_nd;
	return (new_nd);
	}
	for (node = 0; node < (idx - 1); node++)
	{
	if (cpy == NULL || cpy->next == NULL)
	return (NULL);
	cpy = cpy->next;
	}
	new_nd->next = cpy->next;
	cpy->next = new_nd;

	return (new_nd);
}
