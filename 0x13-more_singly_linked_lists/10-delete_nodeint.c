#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: head of a list.
 * deleted.
 * @index: index*
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *pre;
	listint_t *nxt;

	pre = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && pre != NULL; m++)
		{
			pre = pre->next;
		}
	}

	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}

	nxt = pre->next;

	if (index != 0)
	{
		pre->next = nxt->next;
		free(nxt);
	}
	else
	{
		free(pre);
		*head = nxt;
	}

	return (1);
}
