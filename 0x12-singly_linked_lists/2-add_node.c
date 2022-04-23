#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: new node passed into the list.
 * @str: data passed
 * Return: the new node passed.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* allocate node */
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	if (new_node == NULL)
		return (NULL);
	/*put them in str */
	new_node->str = strdup(str);
	/* put the new node into the head */
	new_node->len = len;
	new_node->next = (*head);
	/* make the head as new node */
	(*head) = new_node;
	return (new_node);
}
