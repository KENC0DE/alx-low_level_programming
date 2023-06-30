#include "lists.h"

/**
 * add_node_end - add new node at the end.
 * @head: head of the node.
 * @str: condtenet of the new node.
 * Return: head of the linked list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nav;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	nav = (*head);
	if (!nav)
	{
		*head = new;
		return (*head);
	}

	while (nav->next)
	{
		nav = nav->next;
	}
	nav->next = new;

	return (*head);
}

