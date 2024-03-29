#include "lists.h"
/**
 * print_list - prints all the list
 * @h: is the list.
 * Return: i.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
