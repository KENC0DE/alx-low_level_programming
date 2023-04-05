#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes at the given index
 * @head: the target linked list
 * @index: the position to be deleted
 * Return: 1 if succeed -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *crnt = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		i++;
	}
	crnt = ptr->next;
	ptr->next = crnt->next;
	free(crnt);
	return (1);
}
