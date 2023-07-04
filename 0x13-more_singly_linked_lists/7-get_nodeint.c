#include "lists.h"

/**
 * *get_nodeint_at_index - acces the nth node of the linked list.
 * @head: pointer to the first node of the list.
 * @index: the index number to be accesed.
 * Return: pointer to the nth node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && tp; i++)
	{
		tp = tp->next;
	}
	return (tp);
}


