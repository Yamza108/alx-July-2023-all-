#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: Pointer to the head address
 * Return: 0 if empty, otherwise node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int data;

	if (*head == NULL)
	return (0);

	tp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tp);
	return (data);
}
