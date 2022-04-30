#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: first member
 * @index: node's index.
 * Return: node index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *fn;

	if (head == NULL)
		return (0);
	fn = head;

	while (index != 0)
	{
		fn = fn->next;
		index--;
		if (fn == NULL)
			return (0);
	}
	return (fn);
}
