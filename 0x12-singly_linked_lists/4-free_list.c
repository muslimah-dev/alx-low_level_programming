#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t
 * list.
 * @head: the begininng of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
