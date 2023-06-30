#include "lists.h"

/**
 * print_list - print all element of the list.
 * @h: pointer to the list.
 * Return: length of the string.
*/
size_t print_list(const list_t *h)
{
	const list_t *nav = h;
	size_t nodes = 0;
	char *str;
	int len;

	while (nav)
	{
		str = nav->str;
		len = nav->len;
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}

		printf("[%d] %s\n", len, str);
		nav = nav->next;
		nodes++;
	}

	return (nodes);
}

