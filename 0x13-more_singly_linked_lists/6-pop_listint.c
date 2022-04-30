#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of a linked list.
 * Return: data contained in the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *fn;
	int np;

	if (head == NULL)
		return (0);
	fn = *head;
	if (fn == NULL)
		return (0);
	np = fn->n;
	*head = fn->next;
	free(fn);
	return (np);
}
