#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n).
 * of a listint_int.
 * @head: first member of a linked list.
 * Return: sum of the data.
 */
int sum_listint(listint_t *head)
{
	listint_t *fn;
	int sum = 0;

	if (head == NULL)
		return (0);
	fn = head;

	while (fn != NULL)
	{
		sum += fn->n;
		fn = fn->next;
	}
	return (sum);
}
