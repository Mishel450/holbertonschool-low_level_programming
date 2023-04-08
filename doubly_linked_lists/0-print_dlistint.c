#include "lists.h"
/**
 * print_dlistint - prints all the list and the len.
 * @h: the list.
 * Return: i (the len of the list).
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
