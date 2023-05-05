#include "lists.h"

/**
 * sum_listint - calculates the sum of all data
 * @head: Pointer to the head
 * Return: 0 if empty, else sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum = sum + head->n;
	head = head->next;
	}
	return (sum);
}
