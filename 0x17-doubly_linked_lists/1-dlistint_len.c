#include "lists.h"

/**
 * dlistint_len - returns the number of elements 
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum;

	sum = 0;

	if (!h)
		return (sum);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}
