#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of the list.
 * @head: pointer to the first node of the list.
 * @n: elemen to be stored in the newly added node.
 * Return: address of the new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

