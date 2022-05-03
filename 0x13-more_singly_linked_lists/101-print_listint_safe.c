#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocates
 * @list: append
 * @size: size of the list
 * @new: new node to add
 * Return: pointer to the new list.
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nl;
	size_t n;

	nl = malloc(size * sizeof(listint_t *));

	if (!nl)
	{
		free(list);
		exit(98);
	}
	for (n = 0; n < size - 1; n++)
	{
		nl[n] = list[n];
	}
	nl[n] = new;
	free(list);

	return (nl);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: first member of the list.
 * Return:number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, nm = 0;
	const listint_t **list = NULL;

	while (head)
	{
		for (n = 0; n < nm; n++)
		{
			if (head == list[n])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nm);
			}
		}
		nm++;
		list = _r(list, nm, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nm);
}
