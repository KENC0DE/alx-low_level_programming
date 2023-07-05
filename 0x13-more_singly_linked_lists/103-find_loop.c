#include "lists.h"

/**
 * free_ptr_ff - free every given node.
 * @head: pointer to the first node of the list.
 * Return: Nothing.
*/
void free_ptr_ff(ptr_t **head)
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
 * find_listint_loop - finds the occuruns of a loop in a linked list.
 * @head: pointer to the first node of the list.
 * Return: pinter to the start of the loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	ptr_t *ptrs = NULL, *chk = NULL, *new;

	while (head)
	{
		new = malloc(sizeof(ptr_t));
		if (new == NULL)
			exit(98);

		new->ptr = (void *)(head);
		new->nxt = ptrs;
		ptrs = new;

		chk = ptrs;
		while (chk->nxt)
		{
			chk = chk->nxt;
			if (head == chk->ptr)
			{
				free_ptr_ff(&ptrs);
				return (head);
			}
		}
		head = head->next;
	}
	free_ptr_ff(&ptrs);
	return (NULL);
}

