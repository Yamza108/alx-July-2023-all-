#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Outputs number of elements in this function
 * @h: Pointer to the head of the function
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodz = 0;

	while (h)
	{
	nodz++;
	h = h->next;
	}
	return (nodz);
}
