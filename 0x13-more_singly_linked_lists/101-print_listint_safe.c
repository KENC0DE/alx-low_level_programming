#include "lists.h"

/**
 * add_ptr - stores pointers for checkup
 * @head: storage location.
 * @p: the store address.
 * Return: addres to the newly added location.
*/
ptr_t *add_ptr(ptr_t **head, void *p)
{
	ptr_t *new;

	new = malloc(sizeof(ptr_t));
	if (new == NULL)
		exit(98);

	new->ptr = p;
	new->nxt = *head;
	*head = new;

	return (new);
}

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
	ptr_t *ptrs = NULL, *chk = NULL;

	if (head == NULL)
		exit(98);

	tp = head;
	for (nc = 0; tp; tp = tp->next, nc++)
	{
		chk = add_ptr(&ptrs, (void *)tp);
		while (chk->nxt)
		{
			chk = chk->nxt;
			if (tp == chk->ptr)
			{
				printf("-> [%p] %d\n", (void *)tp, tp->n);
				return (nc);
			}
		}
		printf("[%p] %d\n", (void *)tp, tp->n);
	}

	free_ptr(&ptrs);
	return (nc);
}

