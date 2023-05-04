#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all linked list elements
 * @h: linked list to print
 * Return: numb of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
	printf("%d\n", h->n);
	numb++;
	h = h->next;
	}
	return (numb);
}
