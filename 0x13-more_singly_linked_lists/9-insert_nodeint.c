#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at required position
 * @head: the head of the target list
 * @idx: the position ot be inserted
 * @n: the data of the node
 * Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *back;
	listint_t *front;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	i = 0;
	back = *head;
	while (i < (idx - 1))
	{
		back = back->next;
		i++;
	}
	front = back->next;
	back->next = new_node;
	new_node->next = front;

	return (new_node);
}
