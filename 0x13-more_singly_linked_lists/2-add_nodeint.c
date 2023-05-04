#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning
 *			of listint_t function
 * @head: Pointer to the address of head list
 * @n: int var containing a new node
 * Return: if fails NULL, otherwise new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ele;

	new_ele = malloc(sizeof(listint_t));
	if (new_ele == NULL)
	{
	return (NULL);
	}
	new_ele->n = n;
	new_ele->next = *head;

	*head = new_ele;
	return (new_ele);
}
