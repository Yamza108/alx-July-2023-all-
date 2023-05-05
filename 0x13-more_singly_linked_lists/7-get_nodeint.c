#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node
 * @head: Pointer to the head
 * @index: node index to locate
 * Return: if does'nt exit 0, else locate node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
	if (head == NULL)
	return (NULL);
	head = head->next;
	}
	return (head);
}
