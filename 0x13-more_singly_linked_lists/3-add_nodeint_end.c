#include "lists.h"

/**
 * add_nodeint_end - ands new nodes at the end of the list
 * @head: pointer to the first node
 * @n: value to be added
 *
 * Return: address of the Head
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
