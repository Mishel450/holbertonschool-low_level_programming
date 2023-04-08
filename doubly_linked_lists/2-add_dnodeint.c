#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	list_t *Node;

	Node = malloc(sizeof(list_t));

	if (Node == NULL)
		return (NULL);
	Node->str = strdup(str);
	Node->len = strlen(str);
	Node->next = *head;
	*head = Node;
	return (Node);
}
