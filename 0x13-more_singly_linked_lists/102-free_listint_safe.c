#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates a memory.
 * @list: for appending
 * @size: size of the new list
 * @new: new node to add
 * Return: pointer to new list.
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **nl;
	size_t n;

	nl = malloc(size * sizeof(listint_t *));
	if (nl == NULL)
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
 * free_listint_safe - frees a listint_t linked list
 * @head: furst membet of the list.
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t n, nm = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (nm);
	while (*head != NULL)
	{
		for (n = 0; n < nm; n++)
		{
			if (*head == list[n])
			{
				*head = NULL;
				free(list);
				return (nm);
			}
		}
		nm++;
		list = _ra(list, nm, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nm);
}
