#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first member.
 * Return: 0, success.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd;
	listint_t *mv = NULL;

	if (head == NULL)
		return (NULL);
	fwd = *head;
	while (fwd)
	{
		fwd = fwd->next;
		fwd = (*head)->next;
		(*head)->next = mv;
		mv = *head;
		*head = fwd;
	}
	*head = mv;
	return (*head);
}
