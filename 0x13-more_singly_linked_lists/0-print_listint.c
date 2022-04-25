#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the member of a node.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
