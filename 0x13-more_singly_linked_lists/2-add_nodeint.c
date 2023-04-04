#include "lists.h"

/**
 * add_nodeint - ands new nodes at the beginning of the list
 * @head: pointer to the first node
 * @n: value to be added
 *
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
