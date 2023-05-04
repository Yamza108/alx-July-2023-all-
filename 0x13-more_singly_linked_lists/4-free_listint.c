#include "lists.h"

/**
 * free_listint - Frees a listint
 * @head: Pointer to the head of the function
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
	tp = head->next;
	free(head);
	head = tp;
	}
}
