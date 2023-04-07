#include "lists.h"
/**
 * add_node - adds a new node at the beginning.
 * @head: pointer pointing to a linked list.
 * @str: what will be added.
 * Return: Node or NULL.
 */
list_t *add_node(list_t **head, const char *str)
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
