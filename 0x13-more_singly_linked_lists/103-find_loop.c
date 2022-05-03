#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: the pointer to the first member of the list.
 * Return: where the loop starts or NULL if theres no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Dee, *Nk;

	if (head == NULL || head->next == NULL)
		return (NULL);
	Dee = head->next;
	Nk = (head->next)->next;

	while (Nk)
	{
		if (Dee == Nk)
		{
			Dee = head;
			while (Dee != Nk)
			{
				Dee = Dee->next;
				Nk = Nk->next;
			}
			return (Dee);
		}
		Dee = Dee->next;
		Nk = (Nk->next)->next;
	}
	return (NULL);
}
