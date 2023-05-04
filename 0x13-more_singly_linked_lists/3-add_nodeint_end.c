#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at the end
 * @head: Pointer to the head address
 * @n: The integer for new node
 * Return: if fails NULL, else addresss of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *new_ele, *tail;

	new_ele = malloc(sizeof(listint_t));
	if (new_ele == NULL)
	{
	return (NULL);
	}
	new_ele->n = n;
	new_ele->next = NULL;
	if (*head == NULL)
	*head = new_ele;
	else
	{
	tail = *head;
	while (tail->next != NULL)
	{
	tail = tail->next;
	tail->next = new_ele;
	}
	}
	return (*head);
}
