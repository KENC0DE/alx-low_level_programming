#include "lists.h"

/**
 * free_listint - free the memory used by listint
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
