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
	const listint_t *tp;
	ptr_t *ptrs = NULL, *chk = NULL, *new;

	if (head == NULL)
		exit(98);

	tp = head;
	for (nc = 0; tp; tp = tp->next, nc++)
	{
		new = malloc(sizeof(ptr_t));
		if (new == NULL)
			exit(98);

		new->ptr = (void *)tp;
		new->nxt = ptrs;
		ptrs = new;

		chk = ptrs;
		while (chk->nxt)
		{
			chk = chk->nxt;
			if (tp == chk->ptr)
			{
				printf("-> [%p] %d\n", (void *)tp, tp->n);
				free_ptr(&ptrs);
				return (nc);
			}
		}
		printf("[%p] %d\n", (void *)tp, tp->n);
	}
	free_ptr(&ptrs);
	return (nc);
}

