#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *h;

	current = malloc(sizeof(dlistint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	current->next = h;

	if (h)
		h->prev = current;

	*head = current;

	return (current);
}
