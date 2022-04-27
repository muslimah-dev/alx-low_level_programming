#include "lists.h"

/**
 * free_listint - frees alinked list
 * @head: data to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *fn;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		fn = head->next;
		free(head);
		head = fn;
	}
	free(head);
}
