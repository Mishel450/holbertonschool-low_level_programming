#include "lists.h"
/**
 * add_dnodeint - .
 * @head: .
 * @n: .
 * Return: .
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *Node = malloc(sizeof(dlistint_t));

	if (Node == NULL)
		return (NULL);
	Node->n = n;
	Node->prev = NULL;
	if (*head)
	{
		Node->next = *head;
		(*head)->prev = Node;
	}
	else
		Node->next = NULL;
	*head = Node;
	return (Node);
}
