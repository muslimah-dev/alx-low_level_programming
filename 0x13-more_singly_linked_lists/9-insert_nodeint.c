#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: first member of the linked list.
 * @idx: index where node is added.
 * @n: new node.
 * Return: it reurns n.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fn;
	listint_t *nw_nd;

	if (head == NULL)
		return (0);
	nw_nd = malloc(sizeof(listint_t));
	if (!nw_nd)
		return (0);
	nw_nd->next == NULL;
	nw_nd->n == n;

	if (idx == 0)
	{
		nw_nd->next = *head;
		(*head) = nw_nd;
		return (nw_nd);
	}
	fn = *head;

	while (idx != 1)
	{
		fn = fn->next;
		--idx;
		if (fn == NULL)
		{
			free(nw_nd);
			return (NULL);
		}
	}
	nw_nd->next = fn->next;
	fn->next = nw_nd;

	return (nw_nd);
}
