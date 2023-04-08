#include "lists.h"
/**
 * add_node_end - adds a new node in the end
 * @head: .
 * @str: .
 * Return: NULL of Node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Node, *aux = *head;

	Node = malloc(sizeof(list_t));
	if (Node)
	{
		if (*head == NULL)
			*head = Node;
		else
		{
			while (aux->next != NULL)
				aux = aux->next;
			aux->next = Node;
		}
	Node->str = strdup(str);
	Node->len = strlen(str);
	Node->next = NULL;
}
	else
		free(Node);
	return (Node);
}
