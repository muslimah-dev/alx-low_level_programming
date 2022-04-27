#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: first member.
 */
void free_listint2(listint_t **head)
{
	listint_t *fl;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		fl = *head;
		*head = (*head)->next;
		free(fl);
	}
}
