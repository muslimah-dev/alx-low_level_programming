#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element.
 * @n: data in the linkedlist.
 * Return: pointer to the new node of NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *fn = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (fn->next)
	{
		fn = fn->next;
	}
	fn->next = new_node;
	return (new_node);
}
