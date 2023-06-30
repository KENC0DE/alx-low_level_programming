#include "lists.h"

/**
 * add_node - adds node to the beginning of a list
 * @head: pointet to the first node.
 * @str: passed string data.
 * Return: pointer to newly added node.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}

