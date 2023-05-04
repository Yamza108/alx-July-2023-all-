#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the address of the head
 * Description: Sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
	return;

	while (*head)
	{
	tp = (*head)->next;
	free(*head);
	*head = tp;
	}
	head = NULL;
}
