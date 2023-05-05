#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts number of nodes
 * @head: Pointer to head address
 * Return: 0 if not found, else numb of nodes in list
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
	if (t == h)
	{
	t = head;
	while (t != h)
	{
	nodes++;
	t = t->next;
	h = h->next;
	}
	t = t->next;
	while (t != h)
	{
	nodes++;
	t = t->next;
	}
	return (nodes);
	}
	t = t->next;
	h = (h->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees func loops
 * @h: pointer to the address
 * Return: size that was freed
 * Description: Sets head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tp;
	size_t nodes, idx;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
	for (; h != NULL && *h != NULL; nodes++)
	{
	tp = (*h)->next;
	free(*h);
	*h = tp;
	}
	}
	else
	{
	for (idx = 0; idx < nodes; idx++)
	{
	tp = (*h)->next;
	free(*h);
	*h = tp;
	}
	*h = NULL;
	}
	h = NULL;
	return (nodes);
}
