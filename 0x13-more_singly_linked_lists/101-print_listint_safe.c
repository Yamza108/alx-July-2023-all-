#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts nodes in a looped func
 * @head: pointer to address head
 * Return: if not looped 0, else numb of nodes in life
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	t = head->next;
	h = (head->next)->next;

	while (h)
	{
	if (t == h)
	{
	t = h;
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
  * print_listint_safe - Prints listint safely
  * @head: pointer to address head
  * Return: numb of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (idx = 0; idx < nodes; idx++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
