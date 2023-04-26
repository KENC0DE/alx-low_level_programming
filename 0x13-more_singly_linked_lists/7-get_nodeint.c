#include "lists.h"

/**
 * get_nodeint_at_index - give node data at the index given
 * @head: head of the target linked list
 * @index: index of the date to be accessed
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	i = 0;
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}