#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given pos
 * @head: pointer to the head
 * @index: index to be deleted
 * Return: 1 if pass, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(cpy);
	return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
	if (cpy->next == NULL)
	return (-1);

	cpy = cpy->next;
	}
	tp = cpy->next;
	cpy->next = tp->next;
	free(tp);
	return (1);
}
