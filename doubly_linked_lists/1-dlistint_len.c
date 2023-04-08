#include "lists.h"
/**
 * dlistint_len - returns the len.
 * @h: the list.
 * Return: i (the len of the list).
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
