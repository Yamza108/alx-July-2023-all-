#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds loop contained in the func
 * @head: pointer to the address
 * Return: if fails NULL, else node address where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	if (head == NULL || head->next == NULL)
	return (NULL);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
	if (t == h)
	{
	t = head;
	while (t != h)
	{
	t = t->next;
	h = h->next;
	}
	return (t);
	}
	t = t->next;
	h = (h->next)->next;
	}
	return (NULL);
}
