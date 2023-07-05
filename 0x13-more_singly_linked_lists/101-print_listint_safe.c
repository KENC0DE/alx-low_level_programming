#include "lists.h"

/**
 * free_ptr - free every given node.
 * @head: pointer to the first node of the list.
 * Return: Nothing.
*/
void free_ptr(ptr_t **head)
{
	ptr_t *tp;

	if (head == NULL)
		exit(98);
	if (*head == NULL)
		exit(98);

	while (*head)
	{
		tp = (*head)->nxt;
		free(*head);
		*head = tp;
	}
	*head = NULL;
}

/**
 * print_listint_safe - prints linked list contents
 * @head: pointer to the first node of the list.
 * Return: number of nodes.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nc;
	ptr_t *ptrs = NULL, *chk = NULL, *new;

	for (nc = 0; head; head = head->next, nc++)
	{
		new = malloc(sizeof(ptr_t));
		if (new == NULL)
			exit(98);

		new->ptr = (void *)head;
		new->nxt = ptrs;
		ptrs = new;

		chk = ptrs;
		while (chk->nxt)
		{
			chk = chk->nxt;
			if (head == chk->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_ptr(&ptrs);
				return (nc);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	free_ptr(&ptrs);
	return (nc);
}

