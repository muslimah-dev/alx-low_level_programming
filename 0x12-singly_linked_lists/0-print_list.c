#include "lists.h"
#include <stdio.h>

/**
 * print_list - Write a function that print
 * all the elements if lists_t list
 * @h: the node.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		} else
		{
			printf("[%u]%s", h->len, h->str);
			i++;
		}
	}
	return (i);
}
