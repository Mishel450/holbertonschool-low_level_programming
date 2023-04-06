#include "lists.h"
/**
 * list_len - it return the len of the list.
 * @h: is the list.
 * Return: i.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
