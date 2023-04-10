#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Node;

	Node = malloc(sizeof(dlistint_t)); 
	if (Node == NULL)
		return (NULL);
	if (head->next == NULL)
	{
		Node->n = n;
		Node->prev = *head;
		*head = Node;
	}
	else
	{
		Node->n = n;
		Node->next = *head;
		*head = Node;
	}
	return (Node);

}
