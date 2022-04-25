#include "lists.h"

/**
 * listint_len - function that returns the number of elements int
 * @h: members of the node.
 * Return: number of elements in the linked
 * list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
