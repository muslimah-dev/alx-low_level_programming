#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the member of a node.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *dagg = h;

	while (dagg != NULL)
	{
		printf("%i\n", dagg->n);
		dagg = dagg->next;
		i++;
	}
	return (i);
}
