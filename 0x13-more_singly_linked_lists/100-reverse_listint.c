#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: pointer to the address head
 * Return: Pointer to the first reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *rev;

	if (head == NULL || *head == NULL)
	return (NULL);

	rev = NULL;
	while ((*head)->next != NULL)
	{
	ahead = (*head)->next;
	(*head)->next = rev;
	rev = *head;
	*head = ahead;
	}
	(*head)->next = rev;

	return (*head);
}
