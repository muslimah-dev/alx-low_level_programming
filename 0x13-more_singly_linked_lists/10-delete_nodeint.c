#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: first member.
 * @index: index.
 * Return: 1, if success, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fn;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);
	fn = *head;
	if (index == 0)
	{
		if ((*head)->next)
		{
			(*head) = (*head)->next;
		} else
		{
			(*head) = NULL;
		}
		free(fn);
		return (1);
	}
	while (index != 1)
	{
		if (fn->next == NULL)
			return (-1);
		fn = fn->next;
		--index;
	}
	tmp = fn->next;
	if (fn->next->next)
		fn->next = fn->next->next;
	else
		fn->next = NULL;
	free(tmp);

	return (1);
}
