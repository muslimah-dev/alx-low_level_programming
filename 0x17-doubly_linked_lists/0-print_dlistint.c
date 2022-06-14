#include "lists.h"

/**
 * print_dlistint - prints all elemebts of a dlistint_t *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int sum;

	sum = 0;

	if (!h)
		return (sum);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}

	return (sum);
}
