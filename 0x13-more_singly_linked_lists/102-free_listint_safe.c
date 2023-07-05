#include "lists.h"

/**
 * free_ptr_f - free every given node.
 * @head: pointer to the first node of the list.
 * Return: Nothing.
*/
void free_ptr_f(ptr_t **head)
{
	ptr_t *tp, *tpf;

	tp = *head;
	while (tp)
	{
		tpf = tp->nxt;
		free(tp);
		tp = tpf;
	}
	*head = NULL;
}

/**
 * free_listint_safe - free the linked list.
 * @h: pointer to the first node of the list.
 * Return: number of nodes.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nc;
	ptr_t *ptrs = NULL, *chk = NULL, *new;
	listint_t *tmp;

	for (nc = 0; *h; nc++)
	{
		new = malloc(sizeof(ptr_t));
		if (new == NULL)
			exit(98);

		new->ptr = (void *)(*h);
		new->nxt = ptrs;
		ptrs = new;

		chk = ptrs;
		while (chk->nxt)
		{
			chk = chk->nxt;
			if (*h == chk->ptr)
			{
				free(*h);
				*h = NULL;
				return (nc);
			}
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	return (nc);
}

