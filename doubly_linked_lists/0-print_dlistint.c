#include "lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

	while (h != NULL)
	{
			printf("%s\n", h);
		i++;
		h = h->next;
	}
	return (i);
}
