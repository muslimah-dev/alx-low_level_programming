#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the num
 * of elements in a linked list_t list.
 * @h: the nodes.
 * Return: the number of elements in a list
 * _t list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
